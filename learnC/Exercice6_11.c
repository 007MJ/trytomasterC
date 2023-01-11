#include <stdio.h>

int	main(void)
{
	/*int	nb;
	int	nb1;
	int	nb2;
	int	nb3;

	nb = 0;
	nb1 = 1;
	nb2 = 2;
	nb3 = 3;

	printf("Address memory of value 0 %p", &nb);
	getchar();
	printf("Address memory of value 1 %p", &nb1);
	getchar();
	printf("Address memory of value 2 %p", &nb2);
	getchar();
	printf("Address memory of value 3 %p\n", &nb3);*/

	/*printf("=================Exe 7====================\n");
	char	c;
	printf("Enter a char ");
	scanf("%c", &c);
	printf("%c The size -> (%lu) and the address memory %p\n", c, sizeof(c), &c);
	int	number;
	printf("Enter a int ");
	scanf("%d", &number);
	printf("%d The size -> (%lu) and the address memory %p", number, sizeof(number), &number);*/
	/*printf("======================Exe 8======================\n");
	printf("------------------MENU DE COMMANDE---------------\n");

	char	user;
	printf("(a) Use the function printf\n");
	printf("(b) Change the background color\n");
	printf("(c) Use the francinette\n");
	printf("(d) Change for the new iphone\n");
	printf("(e) No day off\n");
	scanf("%c", &user);
	if (user == 'a')
	{
		printf("you choose the commande a :\n");
	}
	else if (user == 'b')
	{
		printf("you choose the commande b :\n");
	}
	else if (user == 'c')
	{
		printf("you choose the commande c :\n");
	}
	else if (user == 'd')
	{
		printf("you choose the commande e :\n");
	}
	else if (user == 'e')
	{
		printf("you choose the commande e :\n");
	}
	else
	{
		printf("you choose is not in the menu :\n");
	}*/
	/*printf("==================Exe 9======================\n");
	printf("Enter a temper for a draw : ");
	char	temper;
	scanf("%c", &temper);
	int i;
	i = 0;
	int j;
	j = 0;
	int x;
	x = 0;
	while (i < 3)
	{
		printf("%c",temper);
		i++;
	}
	printf("\n");
	while (j < 2)
	{
		printf("%c",temper);
		printf(" ");
		printf("%c",temper);
		printf("\n");
		j++;
	}
	while (x < 3)
	{
		printf("%c",temper);
		x++;
	}
	printf("\n");*/
	printf("===================Exe 10==========================\n");
	char user, otheruser, temp;
	printf("Enter two char : ");
	scanf("%c %c", &otheruser, &user);
	temp = user;
	user = otheruser;
	otheruser = temp;
	printf ("...... swap\n");
	printf("The value of the user %c\n",otheruser );
	printf("The value of the other user %c", user);

}

