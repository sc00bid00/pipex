/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_temp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:22:48 by lsordo            #+#    #+#             */
/*   Updated: 2023/02/07 19:41:18 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

void	tmp_prt(t_data *d)
{
	int	i;
	int	j;

	ft_printf("printout args\n");
	i = 0;
	while (i < d->cnum)
	{
		j = 0;
		while (d->args && d->args[i] && d->args[i][j])
		{
			ft_putendl_fd(d->args[i][j], 2);
			j++;
		}
		i++;
	}
	ft_printf("printout paths\n");
	i = 0;
	while (i < d->cnum)
	{
		ft_putendl_fd(d->paths[i], 2);
		i++;
	}
}
