#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Tao tam giac bang dau *\n");
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n+i; j++){
			if(j<n-1-i)
				printf("   ");
				else printf(" * ");
			}
			printf("\n");
		}
}
	
