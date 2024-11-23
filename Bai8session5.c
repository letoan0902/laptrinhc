#include<stdio.h>
int main(){
	int a,b,ucln,a1,b1,bcnn,a2,b2; 
	printf("Hay nhap so a: ");
	scanf("%d",&a);
	printf("Hay nhap so b: ");
	scanf("%d",&b);
	a2=a;
	b2=b; 
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
    ucln = a;
    bcnn = (a2*b2) / ucln;
	printf ("BCNN la: %d",bcnn);
return 0; 
}
