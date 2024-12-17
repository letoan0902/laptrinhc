#include<stdio.h>
#include<string.h>

void ham1(int *soPhanTu,int a[]);
void ham2(int *soPhanTu,int a[]);
void ham3(int *soPhanTu,int a[]);
void ham4(int *soPhanTu,int a[]);
void ham5(int *soPhanTu,int a[]);
void ham6(int *soPhanTu,int a[]);
int main (){
	int a[100];
	int soPhanTu,i,sum=0,max,b;
	while(1){
	printf("\nMENU"); 
	printf("\n1. Nhap vao so phan tu va tung phan tu"); 
	printf("\n2. In ra cac phan tu la so chan"); 
	printf("\n3. In ra cac phan tu la so nguyen to"); 
	printf("\n4. Dao nguoc mang"); 
	printf("\n5. Sap xep mang"); 
	printf("\n6.Nhap vao mot phan tu va tim kien phan tu trong mang");
	printf("\n7. Thoat");
	printf("\nLua chon cua ban la: ");
	scanf("%d",&b);
		if (b==1){
			ham1(&soPhanTu,a);
		} else if(b==2){
			ham2(&soPhanTu,a);
		} else if (b==3){
			ham3(&soPhanTu,a);
		} else if(b==4){
			ham4(&soPhanTu,a);
		} else if(b==5){
			ham5(&soPhanTu,a);
		} else if (b==6){
			ham6(&soPhanTu,a);
		} else if (b==7){
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
	printf("Cac phan tu so chan la: ");
	for(i=0;i<*soPhanTu;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
}
void ham3(int *soPhanTu, int a[]){
	int i,j,dem=0;
	printf("Cac phan tu so nguyen to la: ");
		for(i=0;i<*soPhanTu;i++){
			dem=0;
			for(j=2;j<a[i];j++){
				if(a[i]%j==0){
					dem++;
				}
			}
			if(dem==0){
				printf("%d ",a[i]);
			}
		}
}
void ham4(int *soPhanTu,int a[]){
	int i,j=0;
	int arr[*soPhanTu];
	for(i=*soPhanTu-1;i>=0;i--){
		arr[j]=a[i];
		j++;
	}
	printf("Mang dao nguoc la: ");
	for(i=0;i<*soPhanTu;i++){
		printf("%d", arr[i]);
	}
}
void ham5(int *soPhanTu,int a[]){
	int i,j;
	int chon; 
	printf("1. Tang dan\n2. Giam dan\n");
	printf("Lua chon cua ban: ");
	scanf("%d",&chon);
	if(chon == 1 ){
		for(i=0;i<*soPhanTu-1;i++){
			for (j=0;j<*soPhanTu-1-i;j++){
				if(a[j]>a[j+1]){
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
			
		}
	} else if (chon==2){
		for(i=0;i<*soPhanTu-1;i++){
			for (j=0;j<*soPhanTu-1-i;j++){
				if(a[j]<a[j+1]){
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	} else {
		printf("Chon khong dung dinh dang");
	}
	printf("\nMang hien tai la: ");
	for(i=0;i<*soPhanTu;i++){
		printf("%d",a[i]);
	}
}
void ham6(int *soPhanTu,int a[]){
	int i,tim,dem=0;
	printf("Nhap phan tu ban muon tim: ");
	scanf("%d",&tim);
	for (i=0;i<*soPhanTu;i++){
		if(a[i]==tim){
			dem++;
		}
	}
	if(dem==0){
		printf("Phan tu ban tim khong co trong mang");
	} else {
		printf("Phan tu ban tim co trong mang");
	}
}

