#include <stdio.h>

struct SinhVien {
	int id;
	char name[20];
	int age;
	char phoneNumber[15];
};
int main(){
	
	struct SinhVien students[50];
	int i;
	for (i=0;i<5;i++){
		students[i].id=i+1;
		printf("Sinh vien thu %d\n",i+1);
		printf("Nhap ten:  ");
		fgets(students[i].name,20,stdin);
		printf("Nhap tuoi: ");
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("Nhap sdt: ");
		fgets(students[i].phoneNumber,15,stdin);
	}
	for (i=0;i<5;i++){
		printf("Sinh vien %d\n",i+1);
		printf("Id: %d\n",students[i].id);
		printf("Ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("Sdt: %s\n",students[i].phoneNumber);
	}
	return 0;
}

