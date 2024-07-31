#include<stdio.h>

void displayArs(int a[], int length){
    printf("\n");

    for(int i = 0; i < length; i += 1){
        printf("%d ", a[i]);
    }

    printf("\n");
}

void inputArs(int a[], int length){
    printf("Nhap phan tu mang: \n");
    for(int i = 0; i < length; i += 1){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }    
}

void findArs(int a[], int length){
    int x;
    char flag = 0;  // is not existed
    printf("Nhap vao gia tri can tim: \n");
    scanf("%d", &x);
    
    for(int i = 0; i < length; i += 1){
        if(a[i] == x){
            flag = 1; 
            break;
        }
    }
    if(flag == 1){
        printf("%d is existed \n", x);
    }
    else{
        printf("%d is not existed \n", x);
    }
}

int main(int argc, char const *argv[])
{
    int a[5], x;
    
    inputArs(a, 5);
    displayArs(a, 5);
    findArs(a, 5);
    // Khi tim kiem xong ta muon ta muon hien thi lai cac gia tri cua mang ta phai copy lai dong in mang
    // Tao mot ham hien thi

    displayArs(a, 5);

    return 0;
}