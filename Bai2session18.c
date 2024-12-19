#include <stdio.h>

struct SinhVien {
	char name[20];
	int age;
	char phoneNumber[15];
};
int main(){
	struct SinhVien std1;
	printf("Nhap ten: ");
	fgets(std1.name,20,stdin);
	printf("Nhap tuoi: ");
	scanf("%d",&std1.age);
	fflush(stdin);
	printf("Nhap sdt ");
	fgets(std1.phoneNumber,15,stdin);
	printf("Ten: %s\n",std1.name);
	printf("Tuoi: %d\n",std1.age);
	printf("Sdt: %s\n",std1.phoneNumber);
	return 0;
}

