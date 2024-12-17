#include<stdio.h>
#include<string.h>

void ham1(char a[]);
void ham2(char a[]);
void ham3(char a[]);
void ham4(char a[]);
void ham5(char a[]);
void ham6(char a[]);
int main (){
	char a[100];
	int soPhanTu,i,sum=0,max,b,size;
	while(1){
	printf("\nMENU"); 
	printf("\n1. Nhap vao chuoi"); 
	printf("\n2. In ra chuoi dao nguoc"); 
	printf("\n3. Dem so luong tu trong chuoi"); 
	printf("\n4. Nhap vao chuoi khac va so sanh voi chuoi ban dau"); 
	printf("\n5. In hoa tat ca cac chu cai trong chuoi");
	printf("\n6. Nhap vao chuoi khac va in ra chuoi ban dau"); 
	printf("\n7. Thoat");
	printf("\nLua chon cua ban la: ");
	scanf("%d",&b);
		if (b==1){
			ham1(a);
		int size=strlen(a);
		} else if(b==2){
			ham2(a);
		} else if (b==3){
			ham3(a);
		} else if(b==4){
			ham4(a);
		} else if(b==5){
			ham5(a);
		} else if(b==6){
			ham6(a);
		} else if (b==7){
			break;
		}
	}
	return 0;
}
void ham1(char a[]){
	fflush(stdin);
	printf("Nhap vao chuoi: ");
	fgets(a,100,stdin);
	int size=strlen(a);
	a[size - 1] = '\0';
}
void ham2(char a[]){
	int i;
	int size=strlen(a);
	for (i=size;i>=0;i--){
		printf("%c", a[i]);
	}
}
void ham3(char a[]){
	int size=strlen(a);
	int i;	
	int dem=0;
	for (i=0;i<size;i++){
		if (a[i]==' '){
			dem++;		
		}
	}
	printf("So tu trong chuoi la: %d",dem+1);
}
void ham4(char a[]){
	char d[100]; 
	fflush(stdin);
	printf("Nhap vao chuoi moi: ");
	fgets(d,100,stdin);
	int size=strlen(a);
	int size2=strlen(d);
	if (size>size2){
		printf("Chuoi vua nhap be hon chuoi ban dau");
	} else if (size==size2){
		printf("Chuoi vua nhap bang chuoi ban dau");
	} else {
		printf("Chuoi vua nhap lon hon chuoi ban dau");
	}
}
void ham5(char a[]){
	int size=strlen(a);
	int i;
	for (i=0;i<size;i++){
				a[i]=toupper(a[i]);
			}
			printf ("%s",a);
}
void ham6(char a[]){
	char d[100]; 
	fflush(stdin);
	printf("Nhap vao chuoi moi: ");
	fgets(d,100,stdin);
	strcat(a, d);
	printf("%s",a); 
} 

