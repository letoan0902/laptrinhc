#include<stdio.h>
    int main(){
    int nam;
	printf("Nam ban can kiem tra la ");
	scanf("%d",&nam);
	if (nam%100==0) {
		if (nam%400==0) {
			printf ("Nam ban nhap la nam nhuan"); 
		} else { printf("Nam ban nhap khong phai nam nhuan");
		} 
	} else if (nam%4==0){
		printf("Nam ban nhap la nam nhuan");
	} else { 
	    printf("Nam ban nhap khong phai nam nhuan");
	}
    return 0;	
} 
