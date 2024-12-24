#include <stdio.h>

 struct Product {
 	int id;
 	char name[50];
 	float purchasePrice;
 	float sellingPrice;
 	int quantity;
 };
 
 void addProduct(struct Product products[],int *size);
 void showProduct(struct Product products[],int size);
 void addOneProduct(struct Product products[],int *size,float *revenue);
 void updateProduct(struct Product products[],int size);
 void sortProduct(struct Product products[],int size);
 void findProduct(struct Product products[],int size);
 void sellProduct(struct Product products[],int size,float *revenue);
 void revenueProduct(struct Product products[],float revenue);

int main(){	
	
	struct Product products[100];
	int check=0,size=0;
	float revenue=0.0;
	int chose;
	
	do {
		printf("========MENU======== \n");
		printf("1.nhap so luong va thong tin san pham \n");
		printf("2.hien thi danh sach san pham \n");
		printf("3.nhap san pham \n");
		printf("4.cap nhat thong tin san pham \n");
		printf("5.sap xep san pham theo gia \n");
		printf("6.tim kiem san pham \n");
		printf("7.ban san pham \n");
		printf("8.doanh thu hien tai \n");
		printf("9.thoat \n");
		scanf("%d",&chose);
		
		switch(chose){
			case 1:
				check=1;
				addProduct(products,&size);
				break;
			case 2:
				if (check==0){
					printf("ban chua nhap so luong va thong tin san pham \n");
				} else {
					showProduct(products,size);
				}
				break;
			case 3:
				if (check==0){
					printf("ban chua nhap so luong va thong tin san pham \n");
				} else {
					addOneProduct(products,&size,&revenue);
				}
				break;
			case 4:
				if (check==0){
					printf("ban chua nhap so luong va thong tin san pham \n");
				} else {
					updateProduct(products,size);
				}
				break;
			case 5:
				if (check==0){
					printf("ban chua nhap so luong va thong tin san pham \n");
				} else {
					sortProduct(products,size);
				}
				break;
			case 6:
				if (check==0){
					printf("ban chua nhap so luong va thong tin san pham \n");
				} else {
					findProduct(products,size);
				}
				break;
			case 7:
				if (check==0){
					printf("ban chua nhap so luong va thong tin san pham \n");
				} else {
					sellProduct(products,size,&revenue);
				}
				break;
			case 8:
				if (check==0){
					printf("ban chua nhap so luong va thong tin san pham \n");
				} else {
					revenueProduct(products,revenue);
				}
				break;
			case 9:
				printf("chuong trinh ket thuc !");
				break;
			default :
			printf("khong co trong menu ! \n");								
		}
	} while (chose!=9);
	

	return 0;
}
void addProduct(struct Product products[],int *size){
	printf("nhap so luong san pham ");
	scanf("%d",size);
	getchar();
	for (int i=0;i<*size;i++){
		products[i].id=i+1;
		printf("thong tin san pham thu %d \n",i+1);
		printf("ten san pham ");
		fgets(products[i].name,50,stdin);
		products[i].name[strcspn(products[i].name, "\n")] = '\0';
		printf("gia nhap ");
		scanf("%f",&products[i].purchasePrice);
		printf("gia ban ");
		scanf("%f",&products[i].sellingPrice);
		printf("so luong ");
		scanf("%d",&products[i].quantity);
		getchar();
	}	
}
void showProduct(struct Product products[],int size){
	for (int i=0;i<size;i++){
		printf("san pham thu %d \n",i+1);
		printf("ma san pham : %d \n",products[i].id);
		printf("ten san pham : %s \n",products[i].name);
		printf("gia nhap : %.2f \n",products[i].purchasePrice);
		printf("gia ban : %.2f \n",products[i].sellingPrice);
		printf("so luong : %d \n",products[i].quantity);
	}
}
void addOneProduct(struct Product products[],int *size,float *revenue){
	int check=0;
	char add[50];
	getchar();
	printf("nhap ten san pham ");
	fgets(add,50,stdin);
	add[strlen(add) -1] = '\0' ;
	for (int i=0;i<*size;i++){
		if (strcmp(products[i].name,add)==0){
			check=1;
			products[i].quantity+=1;
			*revenue -= products[i].purchasePrice;
		}
	}
	if (check==0){
		strcpy( products[*size].name, add );
		products[*size].id = (*size)+1;
		printf("Gia nhap: ");
		scanf("%f", &products[*size].purchasePrice);
		printf("Gia ban: ");
		scanf("%f", &products[*size].sellingPrice);
		printf("So luong: ");
		scanf("%d", &products[*size].quantity);
		
		*revenue -= products[*size].purchasePrice ;
		(*size)++ ;
	}
} 	
void updateProduct(struct Product products[],int size){
	int check=0;
	int index;
	printf("nhap ma san pham muon sua ");
	scanf("%d",&index);
	for (int i=0;i<size;i++){
		if (products[i].id==index){
			check=1;
			getchar();
			printf("ten san pham ");
		    fgets(products[i].name,50,stdin);
		    products[i].name[strcspn(products[i].name, "\n")] = '\0';
	 	    printf("gia nhap ");
		    scanf("%f",&products[i].purchasePrice);
		    printf("gia ban ");
		    scanf("%f",&products[i].sellingPrice);
		    printf("so luong ");
		    scanf("%d",&products[i].quantity);
		    getchar();
		}
	}
	if (check==0){
		printf("khong co san pham !\n");
	}
}
void sortProduct(struct Product products[],int size){
	int index;
	struct Product temp;
	printf("1.tang dan \n");
	printf("2.giam dan \n");
	scanf("%d",&index);
	if (index==1){
		for (int i=0;i<size;i++){
			for (int j=0;j<size-i-1;i++){
				if (products[j].sellingPrice>products[j+1].sellingPrice){
					temp=products[j];
					products[j]=products[j+1];
					products[j+1]=temp;
				}
			}
	    }
	}
	if (index==2){
		for (int i=0;i<size;i++){
			for (int j=0;j<size-i-1;i++){
				if (products[j].sellingPrice<products[j+1].sellingPrice){
					temp=products[j];
					products[j]=products[j+1];
					products[j+1]=temp;
				}
			}
	    }
	}
	if (index>2 || index<1){
		printf("lua chon khong ton tai ! \n");
	}
}
void findProduct(struct Product products[],int size){
	char find[50];
	int check=0;
	getchar();
	printf("nhap ten san pham muon tim ");
	fgets(find,50,stdin);
	find[strlen(find) -1] = '\0';
	for (int i=0;i<size;i++){
		if (strcmp(products[i].name,find)==0){
			check=1;
			printf("ma san pham : %d \n",products[i].id);
			printf("ten san pham : %s \n",products[i].name);
			printf("gia nhap : %f \n",products[i].purchasePrice);
			printf("gia ban : %f \n",products[i].sellingPrice);
			printf("so luong : %d \n",products[i].quantity);
		}
	}
	if (check==0){
		printf("khong tim thay san pham !\n");
	}
}
void sellProduct(struct Product products[],int size,float *revenue){
	int id,quantity,check=0;
	printf("nhap ma san pham muon ban ");
	scanf("%d",&id);
	for (int i=0;i<size;i++){
		if (products[i].id==id){
			check=1;
			printf("nhap so luong muon ban ");
			scanf("%d",&quantity);
			if (products[i].quantity==0){
				printf("san pham da het hang !\n");
			} else if (products[i].quantity<quantity){
				printf("so luong san pham khong du !\n");
			} else {
				products[i].quantity-=quantity;
				*revenue += products[i].sellingPrice * quantity ;
			}
		}
	}
	if (check==0){
		printf("khong tim thay san pham ! \n");
	}
}
void revenueProduct(struct Product products[],float revenue){
	printf("doanh thu hien tai la : %f \n",revenue);
}


