#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float num1_coef1 = 0, num2_coef1 = 0, num1_coef2 = 0, num1_coef3 = 0, tong = 0;
	scanf("%f %f %f %f", &num1_coef1, &num2_coef1, & num1_coef2, &num1_coef3);
	tong = (num1_coef1*1 + num2_coef1*1 + num1_coef2*2 + num1_coef3*3)/(1+1+2+3);
	if(tong >= 8) printf("GIOI");
	else if(tong >= 6.5) printf("KHA");
	else if(tong >= 5) printf("TRUNG BINH");
	else printf("YEU");
	return 0;
}
