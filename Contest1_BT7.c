#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	// So thu nhat: max <= a va chia het cho b (chia nguyen) nghia la b < numeric <= a : num % b == 0
	// So thu hai : min >= a va chia het cho b (chia nguyen) nghia la numeric >= a > b : (num (min) >= a ) % b == 0
	// so thu nhat : b = 5 < num <= 22 : (int) 22/5 = 4 => 4*5 = 20 
	// So thu hai : num >= 22 > 5	   : (int) 22/5 = 4 => 4*5 = 20 < 22 => (4+1)*5 = 25 >= 20 va 25 % 5 = 0
	// truong hop: 5 < num <= 20 : so thu nhat, so thu hai = num
	
	unsigned int a = 0, b = 0, num_1 = 0, num_2 = 0;
	scanf("%d %d", &a, &b);
	if(a % b == 0){
		num_1 = num_2 = a;
	}
	else{
		num_1 = (a/b)*b;
		num_2 = ((a/b)+1)*b;
	}
	printf("%d\n",num_1);
	printf("%d\n",num_2);
	return 0;
}
