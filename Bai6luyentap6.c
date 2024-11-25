#include<stdio.h>
    int main(){
    int ngay,thang;
    printf("Nhap vao ngay ");
    scanf("%d",&ngay);
    printf("Nhap vao thang ");
    scanf("%d",&thang);   
	if (thang>12||thang<0){
		printf("Du lieu nhap khong hop le\n");
	} else if (ngay>31||ngay<1){
		printf("Du lieu nhap khong hop le\n");
	} else if (thang==2){
		if (ngay > 28 ){
			printf("Du lieu nhap khong hop le\n");
		}
	} else if (thang==4||thang==6||thang==9||thang==11) {
		if(ngay==31){
			printf("Du lieu nhap khong hop le\n");
		}
	}
	if ((ngay>=21&&thang==3)||(ngay<21&&thang==4)){
		printf("Ban thuoc cung bach duong");
	} else if ((ngay>=21&&thang==4)||(ngay<21&&thang==5)){
		printf("Ban thuoc cung kim nguu");
	}else if ((ngay>=21&&thang==5)||(ngay<22&&thang==6)){
		printf("Ban thuoc cung song tu");
	}else if ((ngay>=22&&thang==6)||(ngay<23&&thang==7)){
		printf("Ban thuoc cung cu giai");
	}else if ((ngay>=23&&thang==7)||(ngay<23&&thang==8)){
		printf("Ban thuoc cung su tu");
	}else if ((ngay>=23&&thang==8)||(ngay<23&&thang==9)){
		printf("Ban thuoc cung xu nu");
	}else if ((ngay>=23&&thang==9)||(ngay<24&&thang==10)){
		printf("Ban thuoc cung thien binh");
	}else if ((ngay>=24&&thang==10)||(ngay<23&&thang==11)){
		printf("Ban thuoc cung bo cap");
	}else if ((ngay>=23&&thang==11)||(ngay<22&&thang==12)){
		printf("Ban thuoc cung nhan ma");
	}else if ((ngay>=22&&thang==12)||(ngay<20&&thang==1)){
		printf("Ban thuoc cung ma ket");
	}else if ((ngay>=20&&thang==1)||(ngay<19&&thang==2)){
		printf("Ban thuoc cung bao binh");
	}else if ((ngay>=19&&thang==2)||(ngay<21&&thang==3)){
		printf("Ban thuoc cung kim nguu");
	}
    return 0;	
} 
