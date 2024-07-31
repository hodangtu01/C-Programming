#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int incrementAndPrint()
{
    static int value = 1;
    value ++;
    printf("Gia tri cua bien: %d\n",value);
}

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    return 0;
}