#include<stdio.h>
int main(){
    int socu, somoi, hieu, sotien;
	printf("Hay nhap so dien cu ");
	scanf("%d", &socu); 
	printf("Hay nhap so dien moi ");
	scanf("%d", &somoi); 
    hieu = somoi - socu;
    printf("So dien dung la %d\n", hieu);
    if (hieu >=0 && hieu < 50){
    	sotien=hieu*10000;
    printf("So tien phai tra la %d", sotien);
	}
    if (hieu >=50 && hieu < 100){
    	sotien=hieu*15000;
    printf("So tien phai tra la %d", sotien);
	}     
    if (hieu >=100 && hieu < 150){
    	sotien=hieu*20000;
    printf("So tien phai tra la %d", sotien);
	}
    if (hieu >=150 && hieu < 200){
    	sotien=hieu*25000;
    printf("So tien phai tra la %d", sotien);
	}
    if (hieu >=200){
    	sotien=hieu*30000;
    printf("So tien phai tra la %d", sotien);
	}
	if (hieu<0){
	printf(" So dien nhap khong hop le");
	}
return 0;	
} 
