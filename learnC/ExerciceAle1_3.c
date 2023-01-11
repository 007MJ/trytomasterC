#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	headsortails(void)
{
	// Exercice 1
	int	start;
	start = time(NULL);

	srand(start);
	int	pile;

	pile = rand() % 2;
	printf("%d", pile);
}

void	between_two(void)
{
	int start;
	int	otherpile;
	 start = time(NULL);

	 srand(start);
	 int	pile;

	 pile = rand() % 6;
	 printf("%d\n", pile);

	otherpile = rand() % 6;
	 // trouve une facon de remettre le timer a zero;
	 printf("%d", otherpile);
}

void	thelastExercice(void)
{
	int number = 0;
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int number4 = 0;
	int number5 = 0;
	int alenumber2;
	int ale;
	float number6 = 0.0;
	int start;

	start = time(NULL);
	srand(start);
	number = rand() % RAND_MAX;
	number1 = rand() % 367;
	printf("Enter a number :");
	scanf("%d", &number2);
	alenumber2 = rand() % number2;
	number3 = 678 + rand() % 7354;
	printf ("Enter a min and a max : ");
	scanf("%d %d", &number4, &number5);
	ale = number4 + rand() % number5;
	number6 = (float) rand() / 50;
	printf("(Rand max                : %d)\n", number);
	printf("(Between 0 at 367        : %d)\n", number1);
	printf("(User number             : %d)\n", alenumber2);
	printf("(Between 678 and 7354    : %d)\n", number3);
	printf("(Min and max by the user : %d)\n", ale);
	printf("(Float number            : %f)\n", number6);
}
int main()
{
	//headsortails();
	//between_two();
	//thelastExercice();
}
