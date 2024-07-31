// #include <stdio.h>

// int main() {
//     int *ptr;
//     printf("Kich thuoc cua con tro: %lu bytes\n", sizeof(ptr));
//     return 0;
// }

#include<stdio.h>

struct sinhvien
{
    /* data */
    int x;
    char y[50];
} sv1 ={20146150, "HODANGTU"}, sv2; // size of struct sinhvien: 8 byte (3 byte padding for char)

int main(int agrc, char const *argv[])
{
    sv2 = sv1;
    printf("MaSoSinhVien: %d - HovaTen: %s \n", sv2.x, sv2.y); // %c chi in ra mot ky tu don
    return 0;
}