/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_checks_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:52:01 by lsordo            #+#    #+#             */
/*   Updated: 2023/02/26 07:20:34 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

/* return count of " or ' */
int	ft_chkquotes(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str && str[i])
	{
		if (str[i] == '\'' || str[i] == '\"')
			count++;
		i++;
	}
	return (count);
}

/* return limiter name and lenght if heredoc */
int	ft_chkhdoc(t_data *d)
{
	if (ft_strncmp(d->argv[1], "here_doc", 8))
		return (0);
	d->limiter = d->argv[2];
	d->lim_bytes = ft_strlen(d->limiter);
	return (1);
}

/* return char * removing dbl escape totally */
char	*ft_remdblesc(char *str)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = ft_calloc(ft_strlen(str) + 1, 1);
	i = 0;
	j = 0;
	while (str && str[i])
	{
		if (str[i] == '\\' && str[i + 1] && str[i + 1] == '\\')
		i += 2;
		else
		{
			tmp[j] = str[i];
			i++;
			j++;
		}
	}
	free(str);
	return (tmp);
}

/* return char * managing several sorts of prasings (\. '. "...)*/
void	ft_mgexcept(t_data *d)
{
	int		i;
	char	*str;

	i = 0;
	while (i < d->cnum)
	{
		str = ft_strdup(d->argv[i + 2 + d->hd_offset]);
		if (ft_chkquotes(str) > 1)
		{
			if (!ft_chkqmesc(str))
				str = ft_nest(str);
			else
			{
				str = ft_remdblesc(str);
				str = ft_nest(str);
				d->args[i] = ft_split(str, '\0');
			}
			d->args[i] = ft_cond_split(str);
		}
		else
			d->args[i] = ft_split(str, ' ');
		free(str);
		i++;
	}
}

/* return 1 if some quotations are escaped */
int	ft_chkqmesc(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '\'' || str[i] == '\"')
		{
			if (i > 0 && str[i - 1] == '\\')
				return (1);
		}
		i++;
	}
	return (0);
}
