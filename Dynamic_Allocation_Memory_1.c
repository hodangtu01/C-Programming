// Viet 1 chuong trinh yeu cau nguoi dung nhap vao so phan tu cua mang va 
// cap phat bo nho cho mang dong nay 
// sau do nhap cac gia tri va tinh tong cac phan tu 
// &a[i] = p+i
// a[i] = *(p+i) hoac p[i]


#include <stdio.h>
#include <stdlib.h>
int i = 0;


// &a[i] = p+i
// a[i] = *(p+i) hoac p[i]

void nhapsophantu(int *mang, unsigned int num_index){
    for(i = 0; i < num_index; i++){
        printf("Nhap gia tri cho mang[%d]: ",i);
        scanf("%d", mang+i); // Tuyet doi khong dung dau cach
    }
}

int tongMang(int *mang,unsigned int num_index){
    int tong = 0;
    for(i = 0; i < num_index; i++){
       tong += *(mang+i);
   }
   printf("Tong gia tri cua phan tu trong Mang: %d ", tong);
   return tong; 
}

int main(){
    
    unsigned int index = 0;
    printf("Nhap so phan tu cho mang: ");
    scanf("%d", &index);
    
    int *arr = (int*)malloc(index * sizeof(int));
    // Da cap phat xong 1 mang co ten la arr
    nhapsophantu(arr, index);
    tongMang(arr, index);

    
    return 0;
}
