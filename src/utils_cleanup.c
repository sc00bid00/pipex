/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_cleanup_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:29:51 by lsordo            #+#    #+#             */
/*   Updated: 2023/02/05 11:34:47 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex.h>

/* ft clear known number of not null terminated arrays
of null terminated arrays of strings */
void	ft_freeargs(char ***arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_freesplit(arr[i]);
		i++;
	}
	free(arr);
}

/* clears args, paths, envpaths, struct and exits status */
void	ft_cleanup(t_data *d)
{
	int	i;
	int	w;

	if (d->args)
		ft_freeargs(d->args, d->cnum);
	if (d->envpaths)
		ft_freesplit(d->envpaths);
	if (d->paths)
	{
		i = 0;
		while (i < d->cnum)
		{
			free(d->paths[i]);
			i++;
		}
		free(d->paths);
	}
	w = d->flag;
	if (d)
		free(d);
	exit(w);
}
