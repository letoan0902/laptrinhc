#include <stdio.h>
#include<string.h>
void ham(){
	char chuoi[]="lephutoan09022006@gmail.com";
	int i,chuCai=0,chuSo=0,khac=0;
	for (i=0;i<strlen(chuoi);i++){
		if (chuoi[i]>='a'&&chuoi[i]<='z' || chuoi[i]>='A'&&chuoi[i]<='Z'){
			chuCai++;
		} else if (chuoi[i]>='0'&&chuoi[i]<='9'){
			chuSo++;
		} else {
			khac++;
		}
	}
	printf("\nSo luong chu cai: %d",chuCai);
	printf("\nSo luong chu so: %d",chuSo);
	printf("\nSo luong ky tu dac biet: %d",khac);
} 
int main() {
	ham();
    return 0;
}
