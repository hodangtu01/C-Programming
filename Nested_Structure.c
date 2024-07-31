#include<stdio.h>
#include<string.h>

#define NUM 5

typedef struct sinhvien
{
    /* data */
    int ID;
    char name[50];
    struct Date{
        int Day;
        int Month;
        int Year;
    }date;
}SinhVien;


int main(int argc, char const * argv[])
{
    SinhVien str[NUM];
    printf("Nhap thong tin %d sinh vien: \n", NUM);
    for(int i = 0; i < 5; i += 1){
        printf("Nhap ID: ");
        scanf("%d", &(str[i].ID));
        printf("Nhap Ho&Ten: ");
        fflush(stdin);
        scanf("%s", str[i].name);
        printf("Nhap ngay sinh: ");
        scanf("%d", &str[i].date.Day);
        printf("Nhap thang sinh: ");
        scanf("%d", &str[i].date.Month);
        printf("Nhap nam sinh: ");
        scanf("%d", &str[i].date.Year);
    }
    printf("Danh sach sinh vien: \n");
    for(int i = 0; i < NUM; i += 1){
        printf("ID: %d - Name: %s - DD/MM/YY: %d/%d/%d \n", str[i].ID, str[i].name, str[i].date.Day, str[i].date.Month, str[i].date.Year);
    }
    return 0;
}