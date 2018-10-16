#include<stdio.h>
#include<conio.h>

//USCLN 
	int uoc(int a, int b)
	{
		int uc=1;
		for(int i=1; i<=a; i++)
		{
			for(int j=1; j<=b;j++)
			{
				if(a%i==0 && b%j==0 && i==j)
				uc=i;
			}
		}
		return uc;
	}
	
	
//BSCNN
	int boi(int a, int b)
	{
		int bc=(a*b)/uoc(a,b);
		return bc;
	}
	
	
main(){
	int n,m;
		printf("Tim USCLN, BSCNN cua 2 so\n");
		printf("Nhap n: ");
		scanf("%d", &n);
		printf("Nhap m: ");
		scanf("%d", &m);
		printf("USCLN cua %d va %d la: %d",n,m,uoc(n,m));
		printf("\nBSCNN cua %d va %d la: %d",n,m,boi(n,m));
	}
	
