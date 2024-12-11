#include <stdio.h>

void nhapPhanTu(int a[], int kichThuoc){
    for(int i=0;i<kichThuoc;i++){
        printf("Nhap gia tri cho a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

void inPhanTu(int a[], int kichThuoc){
    for(int i=0;i<kichThuoc;i++){
        printf("Mang a[%d]: %d\n",i,a[i]);
    }
}

void themPhanTu(int a[], int *kichThuoc, int viTri, int giaTri){
    for(int i=*kichThuoc;i>=viTri;i--){
        a[i]=a[i-1];
    }
    a[viTri]=giaTri;
    *kichThuoc=*kichThuoc+1;
}

void xoaPhanTu(int a[], int *kichThuoc, int viTri){
    for(int i=viTri;i<*kichThuoc-1;i++){
        a[i]=a[i+1];
    }
    *kichThuoc=*kichThuoc-1;
}

void capNhatPhanTu(int a[], int viTri, int giaTri){
    a[viTri]=giaTri;
}

void sapXep(int a[], int kichThuoc, int luaChon){
    if(luaChon==1){
        for(int i=0;i<kichThuoc;i++){
            for(int j=0;j<kichThuoc-i-1;j++){
                if(a[j]>a[j+1]){
                    int tam=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tam;
                }
            }
        }
    }
    if(luaChon==2){
        for(int i=0;i<kichThuoc;i++){
            for(int j=0;j<kichThuoc-i-1;j++){
                if(a[j]<a[j+1]){
                    int tam=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tam;
                }
            }
        }
    }
}
void timPhanTu(int a[], int kichThuoc, int luaChon, int giaTri, int batDau, int ketThuc, int giua, int dem){
    if(luaChon==1){
        dem=0;
        for(int i=0;i<kichThuoc;i++){
            if(a[i]==giaTri){
                printf("Phan tu %d o vi tri %d\n",giaTri,i);
                dem=1;
            }
        }
    }
    if(luaChon==2){
        dem=0;
        batDau=0;
        ketThuc=kichThuoc-1;
        while(batDau<=ketThuc){
            giua=batDau+(ketThuc-batDau)/2;
            if(a[giua]==giaTri){
                printf("Phan tu %d o vi tri %d\n",giaTri,giua);
                dem=1;
                break;
            }else if(a[giua]>giaTri){
                ketThuc=giua-1;
            }else{
                batDau=giua+1;
            }
        }
    }
    if(dem!=1){
        printf("Phan tu khong co trong a\n");
    }
}

int main(){
    int luaChon;
    int a[100];
    int kichThuoc;
    int viTri,giaTri,luaChonSapXep,luaChonTimKiem;
    int n,n2,batDau,ketThuc,giua,dem;

    do{
        printf("MENU \n1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2.In ra gia tri cac phan tu dang quan li\n");
        printf("3.Them mot phan tu vao vi tri chi dinh\n");
        printf("4.Xoa mot phan tu o vi tri chi dinh\n");
        printf("5.Sua mot phan tu o vi tri chi dinh\n");
        printf("6.Sap xep cac phan tu\n");
        printf("7.Tim kiem phan tu nhap vao\n");
        printf("8.Thoat\n");
        scanf("%d",&luaChon);

        switch(luaChon){
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d",&kichThuoc);
                nhapPhanTu(a,kichThuoc);
                break;
            case 2:
                inPhanTu(a,kichThuoc);
                break;
            case 3:
                printf("Nhap vi tri muon them: ");
                scanf("%d",&viTri);
                printf("Nhap gia tri: ");
                scanf("%d",&giaTri);
                themPhanTu(a,&kichThuoc,viTri,giaTri);
                break;
            case 4:
                printf("Nhap vi tri muon xoa: ");
                scanf("%d",&viTri);
                xoaPhanTu(a,&kichThuoc,viTri);
                break;
            case 5:
                printf("Nhap vi tri muon sua: ");
                scanf("%d",&viTri);
                printf("Nhap gia tri: ");
                scanf("%d",&n2);
                capNhatPhanTu(a,viTri,n2);
                break;
            case 6:
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                scanf("%d",&luaChonSapXep);
                sapXep(a,kichThuoc,luaChonSapXep);
                break;
            case 7:
                printf("1. Tim kiem tuan tu\n");
                printf("2. Tim kiem nhi phan\n");
                scanf("%d",&luaChonTimKiem);
                printf("Nhap phan tu muon tim: ");
                scanf("%d",&n);
                timPhanTu(a,kichThuoc,luaChonTimKiem,n,batDau,ketThuc,giua,dem);
                break;
            case 8:
                break;
            default:
                printf("Hay chon dung\n");
        }
    }while(luaChon!=8);

    return 0;
}

