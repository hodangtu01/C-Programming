#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, n_1 = 0, i = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i += 1){
        scanf("%d",&n_1);
        if(n_1 % 2 == 0){
        	printf("EVEN\n");
		}
        else{
        	printf("ODD\n");
		}
    }
    return 0;
}
