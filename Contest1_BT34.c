#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, tong = 0, r = 0;
	scanf("%d %d %d %d %d", &c1, &c2, &c3, &c4, &c5);
	tong = c1 + c2 + c3 + c4 + c5;
	r = tong / 5;
	if(tong % 5 == 0 && tong != 0){
		printf("%d",r); 
	}
	else{
		printf("-1");
	}
	return 0;
}
