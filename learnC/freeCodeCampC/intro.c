#include <stdio.h>
#include <stdlib.h>

void printtriangle(void)
{
	printf("    /|\\\n");
	printf("   / | \\\n");
	printf("  /  |  \\\n");
	printf(" /   |   \\\n");
	printf("/____|____\\\n");
}
void varibleJoe(void)
{
	char name[] = "JOe";

int age = 21;

	printf("There once was a man named %s\n", name);
	printf("He was %d yeard old\n", age);
	printf("He really liked the name %s\n", name);
	printf("But did not like bieng %d\n", age);
}
int	main()
{
	printtriangle();
	varibleJoe();
}

int min = 48;
