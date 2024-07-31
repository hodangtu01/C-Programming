#include<stdio.h>

int main(int argc, char const *argv[])
{
    int m = 2, n = 3;
    int const *pointer_to_constant = &m;
    printf("Reference pointer_to_const: %d\n", *pointer_to_constant);
    printf("Adress of m: %X\n", pointer_to_constant);

    pointer_to_constant = &n;
    printf("Reference pointer_to_const: %d\n", *pointer_to_constant);
    printf("Adress of n: %X\n", pointer_to_constant);


    int *const pointer_const = &m;
    printf("Reference of pointer_const: %d\n", *pointer_const);
    printf("Address of m: %X\n", pointer_const);
    m++;
     printf("Reference of pointer_const m++: %d\n", *pointer_const);
    printf("Address of m++: %X\n", pointer_const);

    return 0;
}