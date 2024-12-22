#include <stdio.h>
#include<string.h> 
struct SinhVien {
	int id;
	char name[20];
	int age;
	char phoneNumber[15];
};
void ham(int id, struct SinhVien students[]){
	int j;
	int size =5;
	for(j=id-1;j<size;j++){
		students[j]=students[j+1];
		students[j].id = j + 1;
	}
	
}
int main(){
	int size=5;
	struct SinhVien students[50];
	int i;
	for (i=0;i<size;i++){
		students[i].id=i+1;
		printf("Sinh vien %d \n",i+1);
		printf("Ten: ");
		fflush(stdin);
		fgets(students[i].name,20,stdin);
		int length = strlen(students[i].name);
		if (length>0 && students[i].name[length-1] == '\n') {
        students[i].name[length - 1] = '\0';
    	}
		printf("Tuoi: ");
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("Sdt: ");
		fgets(students[i].phoneNumber,15,stdin);
	}
	int delId; 
	printf("Nhap thong tin can xoa\n");
	printf("ID:  ");
	fflush(stdin);
	scanf("%d",&delId);
	ham(delId,students); 
	size--;
	for (i=0;i<size;i++){
		printf("Sinh vien %d\n",i+1);
		printf("Id: %d\n",students[i].id);
		printf("Ten: %s\n",students[i].name);
		printf("Tuoi: %d\n",students[i].age);
		printf("Sdt: %s\n",students[i].phoneNumber);
	}
	return 0;
}


