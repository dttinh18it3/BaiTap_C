#include<stdio.h>
#include<conio.h>
main(){
	int n;
	float kq;
		printf("Tinh tong bac 3 cua n so tu nhien dau tien\n");
		printf("Nhap n: ");
		scanf("%d", &n);
		kq=0;
		for(int i=1;i<=n;i++)
	{
		kq=kq+i*i*i;
	}
		printf("Ket qua la: %f",kq);
}
