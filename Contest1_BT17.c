#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char c = 0;
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z'){
		printf("LOWER");
	}
	else if(c >= 'A' && c <= 'Z'){
		printf("UPPER");
	}
	else if(c >= '0' && c <= '9'){
		printf("DIGIT");
	}
	else{
		printf("SPECIAL");
	}
	return 0;
}
