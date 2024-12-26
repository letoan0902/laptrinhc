	#include<stdio.h>
#include<string.h>
struct Students {
	char id[50];
	char name[50];
	int age;
};
int main (){
	struct Students sv[100] = {
	{"001","Le Phu Toan",18},
	{"002","Nguyen Huy Hoan",18},
	{"003","Le Thanh Minh",18},
	{"004","Trinh Phu Quy",18},
	{"005","Nguyen Trong Nhan",18}
	};
	int size=5,i;
	FILE *file;
	file = fopen("bt01ss21.bin","wb");
	for (i=0;i<size;i++){
		fwrite(&sv[i],sizeof(sv[i]),1,file);
	}
	fclose(file); 
	int choose;
	while(1) {
		printf("\n----MENU-------");
		printf("\n1. In danh sach sinh vien");
		printf("\n2. Them sinh vien");
		printf("\n3. Sua thong tin sinh vien");
		printf("\n4. Xoa sinh vien");
		printf("\n5. Tim kiem sinh vien");
		printf("\n6. Sap xep danh sach sinh vien");
		printf("\n7. Thoat");
		printf("\nMoi ban chon: ");
		scanf("%d",&choose);
		fflush(stdin);
		if(choose==1){
			file = fopen("bt01ss21.bin","rb");
			printf("\nThong tin sinh vien co trong file la: ");
			for(i=0;i<size;i++){
				printf("\nSinh vien thu %d: ",i+1);
				fread(&sv[i],sizeof(sv[i]),1,file);
				printf("\nId: %s, Ten: %s, Tuoi: %d",sv[i].id,sv[i].name,sv[i].age);
			}
			fclose(file); 
		}
		if(choose==2){
			printf("Nhap id: ");
			fgets(sv[size].id,50,stdin);
			sv[size].id[strcspn(sv[size].id, "\n")] = '\0';
			printf("Nhap ten: ");
			fgets(sv[size].name,50,stdin);
			sv[size].name[strcspn(sv[size].name, "\n")] = '\0';
			printf("Nhap tuoi: ");
			scanf("%d",&sv[size].age);
			fflush(stdin);
			size++;
			file = fopen("bt01ss21.bin","wb");
			fwrite(&sv[size],sizeof(sv[size]),1,file);
			fclose(file); 
		}
		if(choose==4){
			int j;
			char delId[50];
			printf("Moi ban nhap id muon xoa: ");
			fgets(delId,50,stdin);
			delId[strcspn(delId, "\n")] = '\0';
	    int f = 0;
	    for (i=0; i<size; i++) {
        if (strcmp(sv[i].id, delId) == 0) {
            f = 1;
            for (j=i; j< size-1;j++) {
                sv[j] = sv[j+1];
            }
            size--;
            break;
        }
            }
            if (f == 1) {
                file = fopen("bt01ss21.bin", "wb");
            	for (i=0;i<size;i++){
            		fwrite(&sv[i],sizeof(sv[i]),1,file);
            	}
            	fclose(file); 
            } else {
                printf("Khong tim thay sinh vien co id: %s\n", delId);
            }
        }
		if(choose==3){
			char editId[50];
			int f =0;
			printf("Nhap id sinh vien can sua: ");
			fgets(editId,50,stdin);
			editId[strcspn(editId, "\n")] = '\0';
			for (i=0; i<size;i++) {
 		        if (strcmp(sv[i].id, editId) == 0) {
    		        f = 1;
    		        printf("Thong tin hien tai cua sinh vien:\n");
    		        printf("ID: %s\n", sv[i].id);
   		            printf("Ten: %s\n", sv[i].name);
 		            printf("Tuoi: %d\n", sv[i].age);
		            printf("Nhap ten moi: ");
    		        fgets(sv[i].name, 50, stdin);
    		        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';		
        		    printf("Nhap tuoi moi: ");
        		    scanf("%d",&sv[i].age);
        		    fflush(stdin);
        		    file = fopen("bt01ss21.bin", "wb");
        		    for (i=0;i<size;i++){
            		    fwrite(&sv[i],sizeof(sv[i]),1,file);
            	        fclose(file); 	
        	        }
        	        printf("Da cap nhat thong tin sinh vien thanh cong!\n");
        		    break;
    		    }
		    }
		    if(f!=1){
		    	printf("\nKhong tim thay sinh vien");
		    }
        }
		if(choose==5){
			char findName[50];
			int f =0;
			printf("Nhap ten sinh vien can tim: ");
			fgets(findName,50,stdin);
			findName[strcspn(findName, "\n")] = '\0';
			for (i=0; i<size;i++) {
 		        if (strcmp(sv[i].name, findName) == 0) {
    		        f = 1;
    		        printf("Thong tin hien tai cua sinh vien:\n");
    		        printf("ID: %s\n", sv[i].id);
   		            printf("Ten: %s\n", sv[i].name);
 		            printf("Tuoi: %d\n", sv[i].age);
 		            break;
		        }
		    }
		    if(f!=1){
		    	printf("\nKhong tim thay sinh vien");
		    }
	}
		if(choose==6){
		    int j;
			struct Students temp;
			for (int i=0; i<size; i++) {
    			for (int j=0; j<size-i-1; j++) {
        			char *lastName1=sv[j].name+strlen(sv[j].name)-1;
        			char *lastName2=sv[j+1].name+strlen(sv[j+1].name)-1;
        			if (strcmp(lastName1, lastName2)>0) {
        			    temp=sv[j+1];
        			    sv[j+1]=sv[j];
        			    sv[j]=temp;
        			}
    			}
			}
			file=fopen("bt01ss21.bin", "wb");
			for (int i=0; i<size; i++) {
    			fwrite(&sv[i], sizeof(sv[i]), 1, file);
			}
			fclose(file);	
		}
		if(choose==7){
		break;	
		}
}


	return 0;
}

