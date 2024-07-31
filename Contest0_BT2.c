#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int x = 0; // -2^31 to 2^31 (>~ -2*10^9 to 2*^10^9) (request: -10^9 to 10^9)
	scanf("%d",&x);
	
	long long y;
	scanf("%lld",&y); // loi khi tu y sang ky tu nhan dau enter scanf nhan enter la 1 ky tu
	getchar();
	
	char c;
	scanf("%c",&c);
	
	float f;
	scanf("%f",&f);
	
	
	double d;
	scanf("%lf",&d);
	
	printf("%d\n",x);
	printf("%lld\n",y);	
	printf("%c\n",c);
	printf("%.2f\n",f);
	printf("%.9lf\n",d);
	
	return 0;
}
