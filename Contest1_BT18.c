#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char c = 0;
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z'){
		c -= 32;
		printf("%c", c);
	}
	else if(c >= 'A' && c <= 'Z'){
		c += 32;
		printf("%c",c);
	}
	else{
		printf("%c",c);
	}
	return 0;
}
