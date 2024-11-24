#include<stdio.h>

int main(){
	
    float a,b,c,del,x0,x1,x2;
    printf ("So a: ");
    scanf("%f", &a);
    printf ("So b: ");
    scanf("%f", &b);
    printf ("So c: ");
    scanf("%f", &c);
    if (a==0){
    	if (b==0){
    		if (c==0){
    			printf ("Vo so nghiem");
			}
		} else if (b!=0){
			x0=-c/b;
			printf ("x = %.2f", x0);
		} else if (c!=0){
			printf ("Vo nghiem");
		}
	} else {
		del=b*b-4*a*c;
		if (del==0){
			x0= -b/2*a;
			printf ("Nghiem kep x0 = %.2f", x0);
		} else if (del >0){
			x1=(-b-sqrt(del))/(2*a);
			x2=(-b+sqrt(del))/(2*a);
			printf ("Hai nghiem phan biet x1= %.2f x2= %.2f", x1 , x2);
		} else {
			printf ("Vo nghiem");
		}
	}
    
	
	return 0;
}
