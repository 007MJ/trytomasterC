#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int main(void)
// {
// 	int a, b, c;
// 	srand(5);

// 	a = rand() % 256;
// 	b = rand() % 256;
// 	c = rand() % 256;

// 	printf("%d\n", a < 128);
// 	printf("%d\n", b > 128);
// 	printf("%d\n", c == 123);

// 	printf("%d\n", a < b >= rand()%2 == 1);
// 	printf("%d\n", a= b !=c +rand()%50);
// 	printf("%d\n",  b= a==c );
// 	printf("%d\n",c= rand()%10 < rand()%10 >= rand()%10 != rand()%10 ==rand()%10);

// }

int main()
{
int a=10, b=0, c=2;
    printf("a+b < c*10 vaut %d\n", a+b < c*10);
    printf("c*10 >= 15 vaut %d\n", c*10 >= 15);
    printf("a+b < c*10 >= 15 == 1 vaut %d\n", a+b < c*10 >= 15 == 1);
    printf("a+b < c*10 <= 15 == 1 vaut %d\n",
           a+b < c*10 <= 15 == 1);
    return 0;
}
