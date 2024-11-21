#include<stdio.h>
    int main(){
    int canha, canhb, canhc;
	printf("Nhap canh a ");
	scanf("%d",&canha);
	printf("Nhap canh b ");
	scanf("%d",&canhb); 
	printf("Nhap canh c ");
	scanf("%d",&canhc); 
	if ( canha+canhb+canhc!=180){
		printf("cac canh ban nhap khong phai tam giac");
	} else if((canha+canhb)<canhc||(canhc+canhb)<canha||(canha+canhc)<canhb){
		printf("cac canh ban nhap khong phai tam giac");
	} else { 
	    printf("cac canh ban nhap la mot tam giac");
	}
    return 0;	
}
