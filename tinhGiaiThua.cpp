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

float tinhTong(int GT[100], int N)
{
	int gt=0;
	float S;
	for(int j=0; j<N; j++)
	{
		S= gt + giaiThua(GT[j]);
	}
	return S;
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
	printf("cac phan tu vua nhap: ");
	for(int i=0; i<n; i++)
	{
		printf(" %d",Arr[i]);
	}
	printf("\ntong giai thua cac phan tu trong mang: %f", tinhTong(Arr,n));
}
