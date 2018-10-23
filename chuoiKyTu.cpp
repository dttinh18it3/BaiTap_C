#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char Ch[100];
	printf("Nhap chuoi: ");
	gets(Ch);
	printf("Chuoi vua nhap la: ");
	puts(Ch);
	int kq=0;
	int length= strlen(Ch);
	for(int i=0; i<length; i++)
	{
		if((Ch[i]!='a') && (Ch[i]!='e') && (Ch[i]!='o') && (Ch[i]!='u') && (Ch[i]!='i') && (Ch[i]!=' ') && (Ch[i]!='y')) 
		kq = kq+1;
	}
	printf("so phu am la: %d",kq);
}
