#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	// Gia re nhat
    // Can mua 10 lit nuoc, chai 1 lit: (a)co gia la 4k, chai 2 lit: (b)co gia la 6k (3k/1lit)
    // Can mua 10 lit nuoc, chai 1 lit: (a)co gia la 4k, chai 2 lit: (b)co gia la 8k (nhu nhau)
    // Can mua 10 lit nuoc, chai 1 lit: (a)co gia la 4k, chai 2 lit: (b)co gia la 9k (4k/1lit loai 1)
    // Can mua 13 lit nuoc, chai 1 lit: (a)co gia la 5k, chai 2 lit: (b)co gia la 11k (loai 1)
    // Can mua 13 lit nuoc, chai 1 lit: (a)co gia la 5k, chai 2 lit: (b)co gia la 9k
    //=> 13/2 = (int)6chai(2l)*9k + 1chai(1l)*5k = 59k
	long long n = 0, a = 0, b = 0;
	scanf("%lld %lld %lld", &n, &a, &b);
	if(a*2 <= b){// a < b/2 truong hop b la so le chia 2 thanh so nguyen, vd a = 3, b =7 a = 3 <= 7/2 = 3
		printf("%lld", n * a);
	}
	else{
		if(n % 2 == 0){
			printf("%lld", n/2 *b);
		}
		else{
			printf("%lld", n/2 * b + a);
			}
		}
	
	return 0;
}
