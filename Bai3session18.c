#include <stdio.h>

struct SinhVien {
	char name[20];
	int age;
	char phoneNumber[15];
};
int main(){
	
	struct SinhVien students[5];
	int i;
	for (i=0;i<5;i++){
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
		printf("Ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("Sdt: %s\n",students[i].phoneNumber);
	}
	return 0;
}

