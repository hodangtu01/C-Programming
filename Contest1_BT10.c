#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	// Dieu kien cua 1 tam giac hop le: sum(2 canh) > (canh con lai), 3 canh deu duong
	unsigned int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}
