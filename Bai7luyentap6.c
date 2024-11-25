#include<stdio.h>
    int main(){
    int thang,nam;
    printf("Nhap vao thang ");
    scanf("%d",&thang);   
    printf("Nhap vao nam ");
    scanf("%d",&nam);
	if (thang>12||thang<0){
		printf("Du lieu nhap khong hop le");
	} else if (thang==2){
		if ((nam%4==0&&nam%100!=0) || (nam%400==0)){
			printf("Thang co 29 ngay");
		} else {
			printf("Thang co 28 ngay");
		}
	} else if (thang==4||thang==6||thang==9||thang==11) {	
		printf("Thang co 30 ngay");
		
	} else {
		printf("Thang co 31 ngay");
	}
    return 0;	
} 
