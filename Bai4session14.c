#include<stdio.h>
int main (){
	char chuoi[9]="LePhuToan";
	char kiemTra;
	printf("Nhap vao ky tu can kiem tra: ");
	scanf("%c",&kiemTra);
	int i,dem=0;
	for (i=0;i<strlen(chuoi);i++){
		if (chuoi[i]==kiemTra){
		 dem++;
		}	
	}
	printf("So lan xuat hien la: %d ",dem); 
	return 0;
} 
