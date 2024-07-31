#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int N = 0;
	scanf("%d", &N);
	unsigned int year = N / 365;
	N %= 365; // N = N % 365;
	unsigned int week = N / 7;
	N %= 7;
	printf("%d %d %d", year, week, N);
	return 0;
}
