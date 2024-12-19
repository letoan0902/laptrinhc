#include <stdio.h>

struct SinhVien {
	int id;
	char name[20];
	int age;
};
int findStudents(struct SinhVien students[], int id );
int main(){
	int index;
	struct SinhVien students[50];
	int i;
	for (i=0;i<5;i++){
		students[i].id=i+1;
		printf("Sinh vien %d \n",i+1);
		printf("Ten:  ");
		getchar();
		fgets(students[i].name,20,stdin);
		printf("Tuoi: ");
		scanf("%d",&students[i].age);
	}
	printf("Nhap id muon sua: ");
	scanf("%d",&index);
	int check = findStudents(students,index);
	if (check==-1){
		printf("Khong tim thay");
	} else {
		printf("Nhap ten can sua: ");
		getchar();
		fgets(students[index].name,20,stdin);
		printf("Nhap tuoi can sua");
		scanf("%d",&students[index].age);
	}
	for (i=0;i<5;i++){
		printf("Sinh vien %d\n",i+1);
		printf("Id: %d\n",students[i].id);
		printf("Ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
	}
	return 0;
}
int findStudents(struct SinhVien students[], int id ){
	for (int i=0;i<5;i++){
		if (students[i].id==id){
			return i;
		}
	}
	return -1;
}


