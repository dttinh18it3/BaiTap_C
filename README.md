# BaiTap_C
#include<stdio.h>
#include<conio.h>
int giaiThua(int N)
{	int k=1;
	for(int j=1; j<=N; j++)
	{
		k=k*j;
	}
	return k;
}

double tinhTong(int GT[100], int N)
{
	int gt=giaiThua(GT[0]);
	for(int j=1; j<=N; j++)
	{
		int S= gt + giaiThua(GT[j]);
	}
	double S;
}
int main(){
	int n;
	printf("So phan tu: \n");
	scanf("%d",&n);
	int Arr[n];
	printf("Nhap tung phan tu:");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		printf(" %d",Arr[i]);
	}
	printf("Giai thua cac phan tu trong mang:%d", tinhTong(Arr,n));
}
