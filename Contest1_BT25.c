#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int money = 0, n = 0;
	scanf("%d", &n);
	money += n / 100; n %= 100;
	money += n/20; n %= 20;
	money += n/10; n %= 10;
	money += n/5;  n %= 5;
	money += n;
	printf("%d",money);
	return 0;
}
