#include <stdio.h>

struct Book {
	char listCode[15];
	char name[50];
	char author[50];
	float price;
};

void addBook(struct Book books[],int size);
void showBook(struct Book books[],int size);
void addOneBook(struct Book books[],int *size);
void deleteBook(struct Book books[],int *size);
void updateBook(struct Book books[],int size);
void sortBook(struct Book books[],int size);
void findBook(struct Book books[],int size);

int main(){
	int chose,size;
	struct Book books[100];
	int count=0;
	do {
		printf("========MENU======== \n");
		printf("1.nhap so luong va thong tin sach \n");
		printf("2.hien thi thong tin sach \n");
		printf("3.them sach vao vi tri \n");
		printf("4.xoa sach theo ma sach \n");
		printf("5.cap nhat thong tin theo ma sach \n");
		printf("6.sap xep sach theo gia \n");
		printf("7.tim kiem sach theo ten sach \n");
		printf("8.thoat \n");
		printf("lua chon cua ban : ");
		scanf("%d",&chose);
		
		switch(chose){
			case 1:
				printf("moi ban nhap so luong ");
				scanf("%d",&size);
				addBook(books,size);
				count=1;
				break;
			case 2:
				if (count==0){
					printf("ban chua nhap so luong va thong tin sach \n");
				} else {
					showBook(books,size);
				}
				break;
			case 3:
				if (count==0){
					printf("ban chua nhap so luong va thong tin sach \n");
				} else {
					addOneBook(books,&size);
				}
				break;
			case 4:
				if (count==0){
					printf("ban chua nhap so luong va thong tin sach \n");
				} else {
					deleteBook(books,&size);
				}
				break;
			case 5:
				if (count==0){
					printf("ban chua nhap so luong va thong tin sach \n");
				} else {
					updateBook(books,size);
				}
				break;
			case 6:
				if (count==0){
					printf("ban chua nhap so luong va thong tin sach \n");
				} else {
					sortBook(books,size);
				}
				break;
			case 7:
				if (count==0){
					printf("ban chua nhap so luong va thong tin sach \n");
				} else {
					findBook(books,size);
				}
				break;
			case 8:
				printf("chuong trinh ket thuc ! ");
				break;				
			default :
			printf("khong co trong menu ! \n");		
		}
		
	} while (chose!=8);

	return 0;
}

void addBook(struct Book books[],int size){
	for (int i=0;i<size;i++){
		printf("nhap thong tin sach thu %d \n",i+1);
		getchar();
		printf("nhap ma sach ");
		fgets(books[i].listCode,15,stdin);
		books[i].listCode[strcspn(books[i].listCode, "\n")] = '\0';
		printf("nhap ten sach ");
		fgets(books[i].name,50,stdin);
		books[i].name[strcspn(books[i].name, "\n")] = '\0';
		printf("nhap tac gia ");
		fgets(books[i].author,50,stdin);
		books[i].author[strcspn(books[i].author, "\n")] = '\0';
		printf("nhap gia tien ");
		scanf("%f",&books[i].price);
	}
}
void showBook(struct Book books[],int size){
	for (int i=0;i<size;i++){
		printf("thong tin sach thu %d \n",i+1);
		printf("ma sach : %s \n",books[i].listCode);
		printf("ten sach : %s \n",books[i].name);
		printf("tac gia : %s \n",books[i].author);
		printf("gia tien : %.2f \n",books[i].price);
	}
}
void addOneBook(struct Book books[],int *size){
	int index;
	printf("moi ban nhap vi tri muon them ");
	scanf("%d",&index);
	for (int i=*size;i>=index;i--){
		books[i]=books[i-1];
	}
	getchar();
	printf("nhap ma sach ");
	fgets(books[index-1].listCode,15,stdin);
	books[index-1].listCode[strcspn(books[index-1].listCode, "\n")] = '\0';
	printf("nhap ten sach ");
	fgets(books[index-1].name,50,stdin);
	books[index-1].name[strcspn(books[index-1].name, "\n")] = '\0';
	printf("nhap tac gia ");
	fgets(books[index-1].author,50,stdin);
	books[index-1].author[strcspn(books[index-1].author, "\n")] = '\0';
	printf("nhap gia tien ");
	scanf("%f",&books[index-1].price);
	(*size)++;
}
void deleteBook(struct Book books[],int *size){
	char index1[15];
	int check;
	getchar();
	printf("moi ban nhap sach muon xoa theo ma sach ");
	fgets(index1,15,stdin);
	for (int i=0;i<*size;i++){
		if (strcmp(books[i].listCode,index1)==0){
			for (int j=i;j<*size;j++){
				books[j]=books[j+1];
			}
		}
	}
	(*size)--;
}
void updateBook(struct Book books[],int size){
	char index2[15];
	int flag=0;
	int check;
	getchar();
	printf("moi ban nhap sach muon cap nhat theo ma sach ");
	fgets(index2,15,stdin);
	index2[strcspn(index2, "\n")] = '\0';
	for (int i=0;i<size;i++){
		if (strcmp(books[i].listCode,index2)==0){
			flag=1;
			printf("nhap ma sach ");
		    fgets(books[i].listCode,15,stdin);
		    books[i].listCode[strcspn(books[i].listCode, "\n")] = '\0';
		    printf("nhap ten sach ");
		    fgets(books[i].name,50,stdin);
		    books[i].name[strcspn(books[i].name, "\n")] = '\0';
		    printf("nhap tac gia ");
		    fgets(books[i].author,50,stdin);
		    books[i].author[strcspn(books[i].author, "\n")] = '\0';
		    printf("nhap gia tien ");
		    scanf("%f",&books[i].price);
		}
	}
	if (flag==0){
		printf("khong tim thay ma sach ");
	}
}
void sortBook(struct Book books[],int size){
	int index3;
	struct Book temp;
	printf("1.tang dan \n");
	printf("2.giam dan \n");
	scanf("%d",&index3);
	if (index3==1){
		for (int i=0;i<size;i++){
			for (int j=0;j<size-i-1;j++){
				if (books[j].price>books[j+1].price){
					temp=books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
	}
	if (index3==2){
		for (int i=0;i<size;i++){
			for (int j=0;j<size-i-1;j++){
				if (books[j].price<books[j+1].price){
					temp=books[j];
					books[j]=books[j+1];
					books[j+1]=temp;
				}
			}
		}
	}
}
void findBook(struct Book books[],int size){
	char name1[50];
	getchar();
	printf("moi ban nhap ten sach muon tim ");
	fgets(name1,50,stdin);
	name1[strcspn(name1, "\n")] = '\0';
	for (int i=0;i<size;i++){
		if (strcmp(books[i].name,name1)==0){
			printf("thong tin sach %s la : \n",name1);
			printf("ma sach : %s \n",books[i].listCode);
			printf("ten sach : %s \n",books[i].name);
			printf("tac gia : %s \n",books[i].author);
			printf("gia tien : %f \n",books[i].price);
		}
	}
	
}

