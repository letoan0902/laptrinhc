#include <stdio.h>

struct SinhVien {
	int id;
	char name[20];
	int age;
	char phoneNumber[15];
};
int main(){
	int size=5;
	struct SinhVien students[50];
	int i;
	for (i=0;i<size;i++){
		students[i].id=i+1;
		printf("Sinh vien %d \n",i+1);
		printf("Ten: ");
		fgets(students[i].name,20,stdin);
		printf("Tuoi: ");
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("Sdt: ");
		fgets(students[i].phoneNumber,15,stdin);
	}
	for (i=0;i<size;i++){
		printf("Sinh vien %d\n",i+1);
		printf("Id: %d\n",students[i].id);
		printf("Ten: %s\n",students[i].name);
		printf("Tuoi : %d\n",students[i].age);
		printf("Sdt: %s\n",students[i].phoneNumber);
	}
	printf("Nhap thong tin can them\n");
	students[size].id=size+1;
	printf("Ten:  ");
	fgets(students[size].name,20,stdin);
	printf("Tuoi: ");
	scanf("%d",&students[size].age);
	fflush(stdin);
	printf("Sdt: ");
	fgets(students[size].phoneNumber,15,stdin);
	size++;
	for (i=0;i<size;i++){
		printf("Sinh vien %d\n",i+1);
		printf("Id: %d\n",students[i].id);
		printf("Ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("Sdt: %s\n",students[i].phoneNumber);
	}
	return 0;
}


