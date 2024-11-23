#include<stdio.h>
int main(){
	int soPhanTu;
	printf("Hay nhap so phan tu cua mang: ");
	scanf("%d",&soPhanTu);;
	int a[1000];
	int i;
	for (i=0;i<soPhanTu;i++){
		printf("\nHay nhap so le thu %d: ",i+1);
		scanf("%d",&a[i]);
		if ((a[i]%2)==0){
			i--;
		}
	}
	
	return 0;
}

