#include <stdio.h>

int main()
{
	int x, y, z;

	x = 3;
	y = 2;
	z = 1;

	printf("%d\n", x | (y & z));
	printf("%d\n", x | (y & ~z));
	printf("%d\n",x ^ (y & ~ z));
	printf("%d\n", x & (y & z));

	x = 1;
	y = -1;

	printf("%d\n", ~x | x);
	printf("%d\n", x & ~x);
	printf("%d\n", x ^ x);

	x <<= 3;
	y <<= 3;
	z >>= 3;
	printf("%d, %d, %d, \n", x, y, z);

	int i;

	i = 4 / 2;
	printf("%4d", i);

	int xi = 4 + 5 * 2 - 7 % 2;
	printf("%4d", xi);

	xi = (4 + 5) * 2 - 7 % 2;
	printf("%4d", xi);
	xi = 5;
	xi += x - 2 * 3;
	printf("%4d", xi);
	xi = 10;
	xi *= x % 3 -  1;
	printf("%4d\n", xi);


	printf("%d", 5 & 1);
	printf("%d", 4 & 1);
}
