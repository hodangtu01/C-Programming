#include <stdio.h>

// Bai 1: Kiem tra tinh chan le
// 5: 0b 0000(...)010(1)
// 4: 0b 0000(...)0100

// 1001: 0b 0000 (...)0011 1110 100(1)
// 998 : 0b 0000 (...)0011 1110 011(0)
// => Kiem tra bit dau tien, neu bang 0 la so chan, bang 1 la so le

void kiemtra(unsigned int numerious){
	
	if((numerious & 0x1) == 0){
		printf("So chan\n");
	}
	else if((numerious & 0x01)== 1){
		printf("So le\n");
	}
}


int main(){
	
	unsigned int num = 0;
	printf("Nhap so kiem tra chan le: ");
	scanf("%d", &num);
	
	kiemtra(num);
	
	return 0;
}
