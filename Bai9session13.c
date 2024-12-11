#include <stdio.h>

void nhapMang(int array[100][100], int *a1, int *a2) {
    printf("Nhap so hang: ");
    scanf("%d", a1);
    printf("Nhap so cot: ");
    scanf("%d", a2);
    
    for (int i = 0; i < *a1; i++) {
        for (int j = 0; j < *a2; j++) {
            printf("Nhap gia tri phan tu cua array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}

void inGiaTriMang(int array[100][100], int a1, int a2) {
    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < a2; j++) {
            printf(" %d ", array[i][j]);
        }
        printf("\n");
    }
}

void inGocMang(int array[100][100], int a1, int a2) {
    printf("%d     %d\n", array[0][0], array[0][a2 - 1]);
    printf("%d     %d\n", array[a1 - 1][0], array[a1 - 1][a2 - 1]);
}

void inDuongBienMang(int array[100][100], int a1, int a2) {
    for (int i=0; i<a1;i++) {
        if (i==0 || i==a1 -1) {
            for (int j=0;j<a2;j++) {
                printf("%d ", array[i][j]);
            }
        } else {
            for (int j=0;j<a2;j++) {
                if (j==0 || j==a2-1) {
                    printf("%d ", array[i][j]);
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

void inDuongCheoMang(int array[100][100], int a1, int a2) {
    if (a1 == a2) {
        printf("Duong cheo chinh: ");
        for (int i=0; i<a1; i++) {
            printf(" %d ", array[i][i]);
        }
        printf("\n");

        printf("Duong cheo phu: ");
        for (int i = 0; i < a1; i++) {
            printf(" %d ", array[i][a1 - 1 - i]);
        }
        printf("\n");
    } else {
        printf("Chi co the thuc hien khi mang la ma tran vuong\n");
    }
}

void inSoNguyenTo(int array[100][100], int a1, int a2) {
    int n, dem;
    printf("\nSo nguyen to co trong mang la: ");
    for (int i=0; i<a1;i++) {
        for (int j=0;j<a2;j++) {
            if (array[i][j] <2) continue;
            n = 2;
            dem = 0;
            while (n < array[i][j]) {
                if (array[i][j]%n==0) {
                    dem++;
                    break;
                }
                n++;
            }
            if (dem==0) {
                printf("%d ", array[i][j]);
            }
        }
    }
    printf("\n");
}

int main(){
    int array[100][100];
    int a,a1,a2;
    do {
        printf("MENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu theo ma tran\n");
        printf("3. In cac phan tu o goc theo ma tran\n");
        printf("4. In cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In cac phan tu nam tren duong cheo chinh va duong cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        scanf("%d", &a);
        
        switch(a) {
            case 1:
                nhapMang(array, &a1, &a2);
                break;
            case 2:
                inGiaTriMang(array, a1, a2);
                break;
            case 3:
                inGocMang(array, a1, a2);
                break;
            case 4:
                inDuongBienMang(array, a1, a2);
                break;
            case 5:
                inDuongCheoMang(array, a1, a2);
                break;
            case 6:
                inSoNguyenTo(array, a1, a2);
                break;
            default:
                break;
        }
    } while (a != 7);
    return 0;
}

