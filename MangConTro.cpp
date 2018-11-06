#include<stdio.h>
#include<conio.h>
#include<malloc.h>
//Nhap
void NhapMang (int *Arr, int N)
{
	for(int i=0; i<N ; i++){
		printf("arr[%d] =",i);
		scanf("%d",Arr+i);
	}
	printf("\n");
}

//In
void InMang	(int *arr, int n)
{
	for(int i=0; i<n ; i++){
		printf("arr[%d]=%d\n",i,*(arr+i));
	}

}	

//Chuyen doi
void ChuyenDoi(int *arr, int *mang, int n)
{
	for(int i=0; i<n; i++){
		*(mang+i)=*(arr+i);
	}
	printf("\n");
}

int main(){
//nhap so n
	int n,a;
	printf("nhap n: ");
	scanf("%d", &n);
//cap bo nho cho con tro
	int *p = (int *)malloc(n*sizeof(int));
	NhapMang(p,n);
	InMang(p,n);
	int *q = (int *)malloc(n*sizeof(int));
	ChuyenDoi(p,q,n);
	InMang(q,n);
}
