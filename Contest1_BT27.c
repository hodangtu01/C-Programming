#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    double a = 0, k = 0;
    scanf("%lf", &a);
    k = a - (int)a;
    if(k >= 0.5){
        a = (int)a + 1 ;
    }
    else{
        a = (int)a;
    }
    printf("%d",(int)a);  
    return 0;
}

