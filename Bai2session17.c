#include<stdio.h>
#include<string.h>

void ham1(char a[]);
void ham2(char a[]);
void ham3(char a[]);
void ham4(char a[]);
void ham5(char a[]);
int main (){
	char a[100];
	int soPhanTu,i,sum=0,max,b;
	while(1){
	printf("\nMENU"); 
	printf("\n1. Nhap vao chuoi"); 
	printf("\n2. In ra chuoi"); 
	printf("\n3. Dem so luong chu cai trong chuoi va in ra"); 
	printf("\n4. Dem so luong chu so trong chuoi va in ra"); 
	printf("\n5. Dem so luong ky tu dac biet trong chuoi va in ra"); 
	printf("\n6. Thoat");
	printf("\nLua chon cua ban la: ");
	scanf("%d",&b);
		if (b==1){
			ham1(a);
		} else if(b==2){
			ham2(a);
		} else if (b==3){
			ham3(a);
		} else if(b==4){
			ham4(a);
		} else if(b==5){
			ham5(a);
		} else if (b==6){
			break;
		}
	}
	return 0;
}
void ham1(char a[]){
	fflush(stdin);
	printf("Nhap vao chuoi: ");
	fgets(a,100,stdin);
}
void ham2(char a[]){
	printf("Chuoi vua nhap la: %s",a);
}
void ham3(char a[]){
	int dem=0,i;
	int size = strlen(a);
	for (i=0;i<size;i++){
		if(a[i]>='a'&&a[i]<='z' || a[i]>='A'&&a[i]<='Z'){
			dem++;
		}
	}
	printf("So chu cai trong chuoi la: %d", dem);
}
void ham4(char a[]){
	int dem=0,i;
	int size = strlen(a);
	for (i=0;i<size;i++){
		if(a[i]>='0'&&a[i]<='9'){
			dem++;
		}
	}
	printf("So chu so trong chuoi la: %d", dem);
}
void ham5(char a[]){
	int dem=0,i;
	int size = strlen(a);
	for (i=0;i<size;i++){
		if(a[i]>='a'&&a[i]<='z' || a[i]>='A'&&a[i]<='Z'){
			dem++;
		}
	}
	for (i=0;i<size;i++){
		if(a[i]>='0'&&a[i]<='9'){
			dem++;
		}
	}
	int dacBiet=size - dem;
	printf("So luong ky tu dac biet: %d",dacBiet-1);
}

