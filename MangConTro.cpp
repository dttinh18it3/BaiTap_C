#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void NhapMang (int *Arr, int N)
{
	for(int i=0; i<N ; i++){
		printf("arr[%d] =",i);
		scanf("%d",Arr+i);
	}
}

void InMang	(int * arr, int n)
{
	for(int i=0; i<n ; i++){
		printf("arr[%d]=%d\n",i,*(arr+i));
	}

}	
int main(){
//nhap so n
	int n,a;
	printf("nhap n: ");
	scanf("%d", &n);
//cap bo nho cho con tro
	int *p = (int *)malloc(n*sizeof(int));
	NhapMang(p, n);
	InMang(p,n);
}
