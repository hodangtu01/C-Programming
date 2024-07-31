#include<stdio.h>
#include<string.h>


typedef struct padding{
        char a1;
        int  b1;
        char c1;
        short d1;        
    }padding;
    typedef struct no_padding{
        char a1;
        char c1;
        short d1;
        int b1;    
    } no_padding;

    typedef struct padding_1{ // no padding - vi ta da sap xep cac bien
        int a1;
        int a2;
        char b1;
        char b2;
        char b3;
        char b4;
    }pad_1;

    typedef struct padding_2{
        int a1;
        char b1;
        char b2;
        int a2;
        char b3;
        char b4;
    }pad_2;

    typedef union mstruct{
        long long a1;
        int  b1;
        char c1;
        int  d1;
        short e1;
        long long a2;
    }mstruct;


int main(int argc, char const *argv[])
{
    
    printf("Size of struct padding: %d\n", sizeof(padding));
    printf("Size of struct no_padding:%d\n", sizeof(no_padding));
    printf("Size of struct padding_1: %d\n", sizeof(pad_1));
    printf("Size of struct padding_2:%d\n", sizeof(pad_2));
    printf("Size of union mstruct:%d\n", sizeof(mstruct));

    return 0;
}