#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	// Kiem tra cac loai tam giac: Tam giac deu; Tam giac can; Tam giac vuong
	unsigned int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a*b*c > 0 && a + b > c && a + c > b && b + c > a){
		if(a == b && b == c) printf("1"); // Tranh viec so sanh 2 bien tro len trong cung 1 bieu thuc 
		else if( a == b || a == c || b == c) printf("2");
		else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a ) printf("3");
		else							  printf ("4");
	}
	else{
		printf("INVALID\n");
	}
	return 0;
}
