#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char c = 0; 
	scanf("%c", &c);
	if(c == 'z' || c == 'Z'){
		printf("a");
	}
	else if(c >= 'A' && c < 'Z'){ // Chuyen ky tu in HOA sang thuong + 32 don vi
		c += 32 + 1;
		printf("%c",c);
	}
	else{
		c += 1;
		printf("%c",c);
	}

	return 0;
}
