#include<stdio.h>

int main(int argc, char const *argv[])
{
    // int a;
    // int *p;

    // a = 5;
    // printf("Address: %d and Value: %d\n", &a, a);

    // p = &a; // bien con tro p dang tro toi vung nho cap phat cho bien a
    //         // p la bien con tro => nen gia tri luu tru cua p la gia tri dia chi
    
    // printf("Value of pointer memory: %d\n", *p); // gia tri cua vung nho ma p dang tro toi, nhan gia tri vung nho cua bien a
    // printf("Value of pointer: %d\n", p); // gia tri cua bien p la dia chi vung nho duoc cap phat cho bien a 

    // *p = 7; // thay doi gia tri cua vung nho ma p dang tro toi 
    // printf("a = %d and *p = %d\n", a, *p);
    // // Khi da thuc hien thay doi gia tri vung nho ma p dang tro toi (p = &a)
    // // bien con tro p dang tro toi vung nho cua bien a, nen khi thay doi gia tri cua vung nho
    // // thi gia tri cua bien a (bien duoc bien con tro p tro toi gia tri vung nho bang *p) cung thay doi

    int a = 5;
    int *p = NULL;

    p = &a;
    *p = a;

    printf("a = %d", a);
    return 0;
}