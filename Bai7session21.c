#include<stdio.h>
struct students {
	char id[20];
	char name[50];
	int age; 
}; 

int main (){
	int a; 
	struct students sv;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&a);
	fflush(stdin);
	FILE *fptr;
	char c[50];
	fptr = fopen("students.txt","w");
	int i;
	for (i=0;i<a;i++){
		printf("Nhap thong tin sinh vien thu: %d\n",i+1);
		printf("Nhap Id: ");
		fgets(sv.id,20,stdin);
		sv.id[strcspn(sv.id, "\n")] = 0;
		printf("Nhap ten: ");
		fgets(sv.name,50,stdin);
		sv.name[strcspn(sv.name, "\n")] = 0;
		printf("Nhap tuoi: ");
		scanf("%d",&sv.age);
		fflush(stdin);
		fprintf(fptr, "%s"" %s"" %d\n",sv.id,sv.name,sv.age);
	}
	return 0;
}

