#include<stdio.h>
#include<conio.h>
main(){
	int n;
	float kq=0;
	printf("Tinh tong binh phuong so le\n");
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=1; i<=n; i+=2){
		kq=kq+i*i;
		}
	printf("Ket qua la: %f",kq);
}
