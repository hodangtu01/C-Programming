#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int month = 0, year = 0;
//	unsigned int i = 0;
	scanf("%d %d", &month, &year);
	if(0 < month && month <= 12 && year > 0){
//		for(i = 0; i <= 11; i = i +2){ // Khong nen dung for trong truong hop nay vi cu chay lien tuc de kiem tra
//			if(month == i +2 ) printf("31");
//		}
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month == 12){
			printf("31");
		}
		if(month == 4 || month == 6 || month == 9 || month == 11){
			printf("30");
		}
		if(month == 2){
			if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){ // Kiem tra thang 2 co phai la nam nhuan hay khong
				printf("29");
			}
			else{
				printf("28");
			}
		}
	}
	else{
		printf("INVALID\n");
	}
	 
	return 0;
}
