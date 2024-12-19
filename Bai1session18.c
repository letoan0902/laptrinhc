#include <stdio.h>

struct SinhVien {
	char name[20];
	int age;
	char phoneNumber[15];
};

int main(){
	struct SinhVien std1={
	"Le Phu Toan",
	18,
	"0932333802"
	};
	printf("Ten: %s\n",std1.name);
	printf("Tuoi: %d\n",std1.age);
	printf("Sdt: %s\n",std1.phoneNumber);
	return 0;
}

