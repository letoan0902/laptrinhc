#include<stdio.h>
int main (){
	char chuoi[100];
	printf("Nhap vao chuoi: ");
	gets(chuoi);
	int i,dem=0;
	for(i=0;i<strlen(chuoi);i++){
		if(chuoi[i]<58&&chuoi[i]>47){
			continue;
		} else {
			dem++;
		}
	}
	printf("So ky tu la chu cai la: %d",dem);
	return 0;
} 
