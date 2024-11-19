#include<stdio.h>
int main(){
	int r;	
	const float pi=3.14; 
    printf("nhap vao gia tri cua ban kinh r: ");
	scanf("%d", &r);
	fflush(stdin); 
	float c=2*pi*r ;
	printf("chu vi cua hinh tron la %f\n ",c);   
	float d=pi*r*r;
	printf("dien tich cua hinh tron la %f\n ",d);  
	return 0; 
} 
