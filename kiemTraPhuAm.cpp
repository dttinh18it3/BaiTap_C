#include<stdio.h>
#include<conio.h>
#include<string.h>
int ktPhuAm( char Ch[100] , int length)
{
	int kq=0;
	for(int i=0; i<length; i++)
	{
		if((Ch[i]!='a') && (Ch[i]!='e') && (Ch[i]!='o') && (Ch[i]!='u') && (Ch[i]!='i') && (Ch[i]!=' ') && (Ch[i]!='y')) 
		kq = kq+1;
	}
	return kq;
}
int main(){
	char Arr[100];
	printf("Nhap chuoi: ");
	gets(Arr);
	printf("Chuoi vua nhap la: ");
	puts(Arr);
	int lgt= strlen(Arr);
	printf("so phu am la: %d",ktPhuAm(Arr,lgt));
}
