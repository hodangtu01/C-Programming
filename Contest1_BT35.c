#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int h = 0, m = 0;
	scanf("%d %d", &h, &m);
	if(h < 24 && h > 0 && m >= 0){
		printf("%d", 1440 - h*60 - m);
	}
	else{
		printf("0");
	}
	return 0;
}
