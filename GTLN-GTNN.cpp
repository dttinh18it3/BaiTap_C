#include<stdio.h>
#include<conio.h>
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
	//GTLN			
			max=so[0];
			for(int i=0; i<n-1; i++){
				for(int j=1; j<n; j++){
					if(so[i]<so[j])
					max=so[j];
				}
			}
			printf("GTLN la: %d", max);
	//GTNN
			min=so[0];
			for(int i=0; i<n-1; i++){
				for(int j=1; j<n; j++){
					if(so[i]>so[j])
					min=so[j];
				}
			}
			printf("\nGTNN la: %d", min);
}
