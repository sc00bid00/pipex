/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_heredoc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:28:11 by lsordo            #+#    #+#             */
/*   Updated: 2023/02/08 10:32:40 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

void	ft_hdoc(t_data *d)
{
	int		file;
	char	*block;

	file = open(".heredoc", O_WRONLY | O_CREAT, 0644);
	if (file == -1)
		ft_cleanup(d);
	while (1)
	{
		block = get_next_line(0);
		if (!ft_strncmp(block, d->limiter, ft_strlen(block) - 1) \
			&& ft_strlen(d->limiter) == ft_strlen(block) - 1)
		{
			free(block);
			close(file);
			break ;
		}
		else
			write(file, block, ft_strlen(block));
		free(block);
	}
	d->files[0] = ".heredoc";
	d->hd_offset = 1;
}
