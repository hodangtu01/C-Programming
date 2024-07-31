#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Can than co the nam nhuan chia het cho 400
int main()
{
	unsigned int N = 0;
	scanf("%d",&N);
	if(N % 400 == 0 ||(N % 4 == 0 && N % 100 != 0)){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	return 0;
}
