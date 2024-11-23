#include<stdio.h>
int main(){
	float so1,so2,chon,tinhToan;
	
	printf("Hay nhap so a: ");
	scanf("%f",&so1);
	printf("Hay nhap so b: ");
	scanf("%f",&so2);
	while (1){
		printf("Moi ban nhap phep toan\n1. Tong 2 so\n2. Hieu 2 so\n3. Tich 2 so\n4. Thuong 2 so\n5. Thoat\n\nLua chon cua ban la: ");
		scanf("%f",&chon);
		if (chon==1){
			tinhToan=so1+so2;
			printf("So %.2f + %.2f = %.2f\n",so1,so2,tinhToan);
		} else if(chon==2){
			tinhToan=so1-so2;
			printf("So %.2f - %.2f = %.2f\n",so1,so2,tinhToan);
		} else if(chon==3){
			tinhToan=so1*so2;
			printf("So %.2f x %.2f = %.2f\n",so1,so2,tinhToan);
		} else if(chon==4){
			tinhToan=so1/so2;
			printf("So %.2f / %.2f = %.2f\n",so1,so2,tinhToan);
		} else {
			printf("\nBan da nhap sai cu phap");
			break;
		}
	}
	
	return 0;
}
