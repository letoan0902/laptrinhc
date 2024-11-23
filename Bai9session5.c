#include<stdio.h>
int main(){
	float so1,so2,so3,min,max,chon,tinhToan;
	
	printf("Hay nhap so a: ");
	scanf("%f",&so1);
	printf("Hay nhap so b: ");
	scanf("%f",&so2);	
	printf("Hay nhap so c: ");
	scanf("%f",&so3);	
	while (1){
		printf("Moi ban lua chon\n1. Nhap 3 so\n2. Tong 3 so\n3. Trung binh cong 3 so\n4. So nho nhat\n5. So lon nhat\n6. Thoat\n\nLua chon cua ban la: ");
		scanf("%f",&chon);
		if (chon==1){
		    printf("Hay nhap so a: ");
	        scanf("%f",&so1);
	        printf("Hay nhap so b: ");
	        scanf("%f",&so2);	
	        printf("Hay nhap so c: ");
	        scanf("%f",&so3);
		} else if(chon==2){
			tinhToan=so1+so2+so3;
			printf("So %.2f + %.2f + %.2f = %.2f\n",so1,so2,so3,tinhToan);
		} else if(chon==3){
			tinhToan=so1+so2+so3;
			tinhToan=tinhToan/3;
			printf("Trung binh cong 3 so la: = %.2f\n",tinhToan);
		} else if(chon==4){
			if(so1<=so2&&so1<=so3){
				min = so1;
			} else if(so2<=so3&&so2<=so1){
				min = so2;
			} else if(so3<=so1&&so3<=so2){
				min = so3;
			}
			printf("So nho nhat la: %.2f",min);
		} else if(chon==5){
			if(so1>=so2&&so1>=so3){
				max = so1;
			} else if(so2>=so3&&so2>=so1){
				max = so2;
			} else if(so3>=so1&&so3>=so2){
				max = so3;
			}
			printf("So lon nhat la: %.2f",max);		
		} else {
			printf("\nCam on ban");
			break;
		}
    }   
	return 0;
}
