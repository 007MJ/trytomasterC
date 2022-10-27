/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:21:27 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/27 11:22:28 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	index_usr;
	int	index_tall;
	int	i;
	int	size;

	size = 0;
	i = 0;
	index_tall = 0;
	index_usr = 3;
	while (index_tall < index_usr)
	{
		while (i < index_usr)
		{
			printf("#");
			i++;
		}
		printf("\n");
		index_tall++;
	}
}
