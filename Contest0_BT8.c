#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	unsigned int x = 0, y = 0;
	scanf("%d %d",&y, &x);
	printf("%d\n%.2f",x/y, (float)x/y);
	return 0;
}
