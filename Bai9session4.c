#include<stdio.h>
    int main(){
    int ngay,thang,nam;
    printf("Nhap vao ngay ");
    scanf("%d",&ngay);
    printf("Nhap vao thang ");
    scanf("%d",&thang);   
    printf("Nhap vao nam ");
    scanf("%d",&nam);
	if (thang>12||thang<0){
		printf("Du lieu nhap khong hop le");
	} else if (ngay>31||ngay<1){
		printf("Du lieu nhap khong hop le");
	} else if (thang==2){
		if (ngay > 28 ){
			printf("Du lieu nhap khong hop le");
		}
	} else if (thang==4||thang==6||thang==9||thang==11) {
		if(ngay==31){
			printf("Du lieu nhap khong hop le");
		}
	} else {
		printf("Du lieu nhap vao hop le\nNgay Thang Nam ban nhap la %d %d %d", ngay,thang,nam);
	}
    return 0;	
} 
