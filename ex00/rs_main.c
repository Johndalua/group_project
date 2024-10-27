/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rs_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnzamu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:20:05 by jnzamu            #+#    #+#             */
/*   Updated: 2024/10/27 18:20:27 by jnzamu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**args(int argc, char **argv, int *nargs);
void	gen(int **locked, int size);
void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		**bord;
	int		size;

	bord = args(argc, argv, &size);
	if (bord != NULL)
	{
		gen(bord, size);
	}
	else
		ft_putstr("Error\n");
}
