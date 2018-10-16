#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	int n;
	float kq;
		printf("Tinh tong nghich dao\n");
		printf("Nhap n: ");
		scanf("%d", &n);
		kq=0;
			for(int i=1; i<=n ; i++){
				kq=kq+1.0/i;
			}
		printf("ket qua la: %f", kq);
}
