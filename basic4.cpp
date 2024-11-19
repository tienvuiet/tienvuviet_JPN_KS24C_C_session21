#include<stdio.h>
int main(){
	int a, b;	
    printf("nhap vao gia tri cua chieu dai a: ");
	scanf("%d", &a);
	printf("nhap vap gia tri cua chieu rong b: ");
	scanf("%d", &b);
	int c=(a+b)*2;
	printf("chu vi cua hinh chu nhat la %d\n ",c);   
	int d=a*b;
	printf("dien tich cua hinh chu nhat la %d\n ",d);  
	return 0; 
} 
