#include<stdio.h> 
int main(){
	int a,b,c;
	printf("nhap vao 3 canh a,b,c: \n ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		printf("day la canh cua tam giac!"); 
	 } else{printf("day ko phai la canh cua tam giac!");}
	 return 0; 
} 
