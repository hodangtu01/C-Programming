#include<stdio.h>
#include<string.h>

void nhapmang(int *mang, int *sophantu){
    
    for(int i = 0; i < *sophantu; i++){
        printf("Mang[%d] = ", i);
        scanf("%d",(mang+i));
    }
}

void inmang(int *mang, int *sophantu){
    for(int i = 0; i < *sophantu; i++){
        printf("Mang[%d]: %d ", i, *(mang+i));
    }
}

int tinhtong(int *mang, int *sophantu){
    int sum = 0;
    for(int i = 0; i < *sophantu; i++){
        sum += *(mang+i);
    }
    return sum;
}

int main(){
    int index;  // Vì mảng khi khai báo kích thước sẽ được cố định -> Trường hợp này: Mặc định mảng arr[0] Dẫn đến việc khi bạn nhập dữ liệu vào mảng arr
    //, ta đang ghi đè vào vùng nhớ ngoài phạm vi của mảng, gây ra hành vi không xác định (undefined behavior). 
    //Hành vi này có thể dẫn đến việc mảng chỉ nhận được một số lượng phần tử nhất định (như Mang[3]).
    printf("Nhap so phan tu: ");
    scanf("%d", &index);
    int arr[index];
    nhapmang(arr, &index);
    inmang(arr, &index);
    int tong = tinhtong(arr, &index);
    printf("\nTong phan tu cua Mang: %d", tong);
    return 0;
}
