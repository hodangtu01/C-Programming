#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, bia = 0, vo = 0, ketqua = 0;
    scanf("%d", &n);
    ketqua = n / 28;
    vo = ketqua;
    while(vo >= 3){
    bia = vo / 3;
    ketqua += bia;
    vo = vo % 3 + bia;
}
    printf("%d",ketqua);
    return 0;
}