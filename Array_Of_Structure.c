#include<stdio.h>
#include<string.h>

#define NUM 5 // So luong sinh vien

typedef struct sinhvien{
    int ID;
    char name[50];
} SinhVien;

int main(int argc, char const *argv[])
{
    SinhVien str[NUM];
    printf("Nhap thong tin 5 sinh vien: \n");
    for(int i = 0; i < NUM; i += 1){
        printf("Nhap ID[%d]: ", i);
        scanf("%d", &(str[i].ID));
        printf("Nhap Ho&Ten[%d]: ",i);
        fflush(stdin);
        scanf("%s", str[i].name); // Chi co the nhap ho va ten lien nhau
    }
    printf("Danh sach sinh vien: \n");
    for(int i = 0; i < NUM; i += 1){
        printf("ID: %d - Name: %s \n", str[i].ID, str[i].name);
    }
    return 0;
}