#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int n = 0;
	scanf("%d",&n);
	if (n%2 == 0) printf("YES\n");
	else printf("NO\n");
		
	if(n % 15 == 0) printf("YES\n");
	else printf("NO\n");
	
	if(n % 3 == 0 && n % 7 != 0) printf("YES\n");
	else printf("NO\n");
	
	if(n % 3 == 0 || n % 7 == 0) printf("YES\n");
	else printf("NO\n");
	
	if(n > 30 && n < 50) printf("YES\n");
	else printf("NO\n");
	
	if(n>= 30 && ((n % 2 == 0) || n % 3 == 0 || n % 5 == 0 || n % 6 == 0)) // khong nho hon 30 va it nhat chia het cho 3,5,6
		printf("YES\n");
	else printf("NO\n");
	
	unsigned int r = n % 10;
	if(n >= 10 && n <= 99 &&( r == 2 || r == 3 || r == 5 || r == 7)) printf("YES\n");
	else printf("NO\n");
	
	if(n <= 100 && n % 23 == 0) printf("YES\n");
	else printf("NO\n");
	
	if(n < 10 || n > 20) printf("YES\n");
	else printf("NO\n");
	
	if(r % 3 == 0) printf("YES\n"); // So tan cung la boi so cua 3 (chia lay du voi 10)
	else printf("NO\n");
	
		
	return 0;
}
