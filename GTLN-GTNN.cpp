#include<stdio.h>
#include<conio.h>
	//GTLN
int Max(int Arr[50], int n)
{
		int max=Arr[0];
			for(int i=0; i<n; i++){
					if(max<Arr[i])
					max=Arr[i];
				}
		return max;
}
	//GTNN
int Min(int Arr[50], int n)
{
	int min=Arr[0];
			for(int i=0; i<n; i++){
					if(min>Arr[i])
					min=Arr[i];
				}
		return min;
}
int main(){
		int n;
		int max, min;
			printf("Tim so lon nhat, so nho nhat\n");
			printf(	"Nhap so phan tu:" );
			scanf("%d", &n);
		int so[n];
			printf("Nhap tung phan tu: \n");
			for(int i=0; i<n; i++){
				scanf("%d",&so[i]);
				printf("",so[i]);	
			}
			
			printf("GTLN la: %d", Max(so,n));

			printf("\nGTNN la: %d", Min(so, n));
}
