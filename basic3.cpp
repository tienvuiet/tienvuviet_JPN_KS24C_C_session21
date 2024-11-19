#include<stdio.h>
int main(){
	int a, b;	
    printf("nhap vap gia tri cua a: ");
	scanf("%d", &a);
	printf("nhap vap gia tri cua b: ");
	scanf("%d", &b);
	int c=a+b;
	printf("tong hai so la %d\n ",c);   
	int d=a-b;
    printf("hieu hai so la %d\n ",d);  
	int e=a*b;
	printf("tich hai so la %d\n ",e); 
	float f=a/b ;
	printf("tich hai so la %f\n ",f); 
	return 0; 
} 
