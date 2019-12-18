#include<stdio.h> 
#include<math.h> 
int main(){
	int a,b,c;
	printf("nhap vao 3 canh a,b,c: \n ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int s,p,ps; 
	if(a+b>c && a+c>b && b+c>a)
	{s=a+b+c;
	p=s/2;
	ps= sqrt(p*(p-a)*(p-b)*(p-c));
		printf("day la canh cua tam giac!  \n chu vi = %d, \n  dien tich = %d ",s,ps); 
	 } 
	 else{printf("day ko phai la canh cua tam giac!");}
	 return 0; 
} 
