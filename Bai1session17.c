#include<stdio.h>
#include<string.h>

void ham1(int *soPhanTu,int a[]);
void ham2(int *soPhanTu,int a[]);
void ham3(int *soPhanTu);
void ham4(int *soPhanTu,int a[],int *sum);
void ham5(int *soPhanTu,int *max,int a[]);
int main (){
	int a[100];
	int soPhanTu,i,sum=0,max,b;
	while(1){
	printf("\nMENU"); 
	printf("\n1. Nhap vao so phan tu va tung phan tu"); 
	printf("\n2. Hien thi cac phan tu trong mang"); 
	printf("\n3. Tinh do dai mang"); 
	printf("\n4. Tinh tong cac phan tu trong mang"); 
	printf("\n5. Hien thi phan tu lon nhat"); 
	printf("\n6. Thoat");
	printf("\nLua chon cua ban la: ");
	scanf("%d",&b);
		if (b==1){
			ham1(&soPhanTu,a);
		} else if(b==2){
			ham2(&soPhanTu,a);
		} else if (b==3){
			ham3(&soPhanTu);
		} else if(b==4){
			ham4(&soPhanTu,a,&sum);
		} else if(b==5){
			ham5(&soPhanTu,&max,a);
		} else if (b==6){
			break;
		}
	}
	return 0;
}
void ham1(int *soPhanTu,int a[]){
	int i;
	printf("So phan tu: ");
			scanf("%d",soPhanTu);
			for (i=0;i<*soPhanTu;i++){
				printf("Phan tu thu %d: ",i);
				scanf("%d",&a[i]);
			}
}
void ham2(int *soPhanTu,int a[]){
	int i;
	printf("Mang hien tai la: ");
			for(i=0;i<*soPhanTu;i++){
				printf("%d ",a[i]);
			}
}
void ham3(int *soPhanTu){
	printf("Do dai mang la: ");
		printf("%d",*soPhanTu);
}
void ham4(int *soPhanTu,int a[],int *sum){
	int i;
	for(i=0;i<*soPhanTu;i++){
		*sum = *sum + a[i];
	}
	printf("Tong cac phan tu la: %d",*sum);
}
void ham5(int *soPhanTu,int *max,int a[]){
	int i;
	*max = a[0];
	for (i=1;i<*soPhanTu;i++){
		if(*max<a[i]){
			*max = a[i];
		}
	}
	printf("Phan tu lon nhat la: %d",*max);
}
