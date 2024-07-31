#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdint.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int n, temp;
    int *p; // quan ly cac vung nho duoc cap phat
    
    printf("\nEnter number of element in the memory: ");
    scanf("%d", &n);

    p = malloc(n * sizeof(int)); // n la tong so cac phan tu va tinh kich thuoc cua moi phan tu
                                 // Moi phan tu co kieu int nhan voi tong so phan tu n = Tong so vung nho duoc cap phat cho mang va duoc quan ly boi con tro p
    srand(time(NULL));

    for(int i = 0; i < n; i += 1){
        *(p+i) = rand() % 50; // Truy cap gia tri nho de de theo doi nen chia lay du 50
    }

    // Sau khi khoi gan gia tri cho cac phan tu o trong mang duoc cap phat va quan ly boi con tro p
    // Su dung vong lap for in ra cac gia tri phan tu trong mang
    for(int i = 0; i < n; i += 1){
        int temp = *(p+i);
        printf("%d ", temp);
    }

    return 0;
}