#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned long long n = 0, tong = 0;
    scanf("%lld", &n);
    while(n >= 10){
        while(n){
            tong += n % 10;
            n /= 10;
        }
        n = tong;

    }
    printf("%lld\n",n);
    return 0;
}
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// unsigned long long sum_of_digits(unsigned long long n) {
//     if (n < 10) return n;
//     unsigned long long sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum_of_digits(sum);
// }

// int main() {
//     unsigned long long n = 0;
//     scanf("%lld", &n);
//     printf("%lld\n", sum_of_digits(n));
//     return 0;
// }