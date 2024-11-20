#include<stdio.h>
int main(){
	float toan, anh, van, tong, trungbinh;
	printf("Moi nhap diem toan ");
	scanf("%f", &toan);
	printf("Moi nhap diem anh ");
	scanf("%f", &anh);
	printf("Moi nhap diem van ");
	scanf("%f", &van);
	tong = toan + anh + van;
	printf("Tong diem la %.2f", tong);
	trungbinh = tong / 3;
	printf("\n Diem trung binh la %.2f", trungbinh);
	return 0;
} 
