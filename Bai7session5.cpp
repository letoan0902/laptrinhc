#include<stdio.h>
int main(){
	int a,b,a1,b1; 
	printf("Hay nhap so a: ");
	scanf("%d",&a);
	printf("Hay nhap so b: ");
	scanf("%d",&b);
	if(b>a){
		b1=a;
		a=b;
		b=b1;		
	}
	while(b!=0){
	
		a1=a;
		b1=b;
	    a=b;
	    b=a1%b1;
	}
    printf("UCLN la: %d",a); 

}
