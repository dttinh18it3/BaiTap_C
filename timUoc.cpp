#include<stdio.h>
#include<conio.h>
main(){
	int i,n,u;
	printf("Tim uoc nguyen\n");
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("Uoc cua %d la: ", n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			u=i;
			printf(" %d",u);
		}
	}
}
