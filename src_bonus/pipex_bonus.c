/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:32:55 by lsordo            #+#    #+#             */
/*   Updated: 2023/02/07 19:22:03 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

int	main(int argc, char **argv, char **envp)
{
	t_data	*d;

	if (argc < 5)
		return (1);
	d = malloc(sizeof(t_data));
	if (!d)
		return (1);
	d->argc = argc;
	d->argv = argv;
	d->envp = envp;
	if (ft_chkhdoc(d))
		ft_hdoc(d);
	else
	{
		d->files[0] = d->argv[1];
		d->hd_offset = 0;
	}
	ft_parse(d);
	ft_pipe(d);
	unlink(".heredoc");
	ft_cleanup(d);
	return (0);
}
