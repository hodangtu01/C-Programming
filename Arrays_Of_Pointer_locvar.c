#include <stdio.h>
// Trong C, các biến cục bộ (local variables) được lưu trữ trong ngăn xếp (stack) của bộ nhớ. Khi các biến được khai báo, 
// chúng thường được gán địa chỉ theo thứ tự ngược lại trong stack, vì stack thường mở rộng từ các địa chỉ cao xuống địa chỉ thấp.

int main()
{
    int var1 = 10;
    int var2 = 20;
    int var3 = 30;

    int* ptr_arr[3] = { &var1, &var2, &var3 };

    for (int i = 0; i < 3; i++) {
        printf("Value of var %d: %d\tAddress: %p\n", i + 1, *ptr_arr[i], ptr_arr[i]);
    }

    return 0;
}