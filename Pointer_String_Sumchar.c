#include <stdio.h>

int main(void) {
    int sum = 0;
    char *array_str= "Hello";
    printf("%c\n", array_str[0]);
    printf("%c\n", *(array_str+0));
    for(int i = 0; i < 10; i++){
        sum = *(array_str+1) + i; 
        printf("%c ", sum);
    }
    
    return 0;
}
