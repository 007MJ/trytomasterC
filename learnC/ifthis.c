/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifthis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:06:18 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/22 15:26:18 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	choix;

	choix = 0;
	printf("== menu ==\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc bacon\n");
	printf("Votre choix ?\n");
	scanf("%d", &choix);
	if (choix == 1)
	{
		printf("Royal Cheese : 23.90$\n");
	}
	else if (choix == 2)
	{
		printf ("Mc Deluxe : 18.98$\n");
	}
	else if (choix == 3)
	{
		printf("Mc bacon : 12.45$\n");
	}
	else
	{
		printf("C'est pas dans le menu : 0.00$\n");
	}
}
