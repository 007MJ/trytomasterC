/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:21:28 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/11/23 10:48:03 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int	addingnumber(int nHowMany, ...)
{
	va_list	intargumentpointer;
	int		sum;
	int		i;

	sum = 0;
	i = 0;
	va_star(intargumentpointer, nHowMany);
	while (i < nHowMany)
	{
		sum += va_arg(intargumentpointer, int);
		i++;
	}
	va_end(intargumentpointer);
	return (sum);
}

int	main(int argc, char **argv[])
{
	system("clear");
	printf("\n\n Variadic functions: \n\n");

	printf("\n 10 + 20 = %d", addingnumber(2, 10 20));
	printf("\n 10 + 20 + 30 = %d", addingnumber(3, 10, 20, 30));
	printf("\n 10 + 20 + 30 + 40 = %d", addingnumber(4, 10, 20, 30));
}
