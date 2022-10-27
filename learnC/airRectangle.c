/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   airRectangle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:40:54 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/23 18:53:47 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

double	airRectangle(double largeur, double hauteur);

int	main(void)
{
	printf("Rectangle 0= %d",airRectangle(5,10));

	printf("Rectangle 1 = %d",airRectangle(5,10));

	return (0);
}

int	airRectangle(double largeur, double hauteur)
{
	return (largeur * hauteur);
}
