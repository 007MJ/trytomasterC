/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathvariable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <mnshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:40:04 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/22 14:25:05 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	number;
	int	number1;
	int	resultat;

	number = 0;
	number1 = 0;
	printf("++++++++++++++++Addition++++++++++++++++++++\n");
	printf("Enter a number :\n");
	scanf("%d", &number);
	printf("Enter second number :\n");
	scanf("%d", &number1);
	resultat = number + number1;
	printf("The resultat : %d\n", resultat);
	printf("**************Multiplication*******************\n");
	printf("Enter a number :\n");
	scanf("%d", &number);
	printf("Enter second number :\n");
	scanf("%d", &number1);
	resultat = number * number1;
	printf("The resultat : %d", resultat);
	return (0);
}
