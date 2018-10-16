#include<stdio.h>
#include<conio.h>

// bai 8 
 main(){
	int n;
		printf("Tinh giai thua\n");
		printf("Nhap n: ");
		scanf("%d", &n);
	double gt=1;
	for(int i=1; i<=n; i++)
		gt=gt*i;
\
	printf("%d! = %lf", n, gt);
	
	
