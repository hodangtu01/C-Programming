#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float a = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;
	scanf("%f %f %f", &a, &b, &c);
	if(a != 0){
		delta = b*b - 4*a*c;
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		if(delta < 0){
			printf("VO NGHIEM");
		}
		else if(delta == 0){
			printf("%.2f", -b/(2*a));
		}
		else{
			if(x1 < x2){
				printf("%.2f %.2f", x1, x2);
			}
			else{
				printf("%.2f %.2f", x2, x1);
			}
		}
	}
	if(a == 0){
		if(b == 0 && c == 0){
			printf("VO SO NGHIEM");
		}
		else if(b == 0 && c != 0){
			printf("VO NGHIEM");
		}
		else{
			printf("%.2f", - c/b);
		}
	}
	
	return 0;
}
