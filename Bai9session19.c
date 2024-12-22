#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} SinhVien;

void show(SinhVien menu[], int n);
void add(SinhVien menu[], int *n);
void update(SinhVien menu[], int n);
void del(SinhVien menu[], int *n);
void sort(SinhVien menu[], int n);
void search(SinhVien menu[], int n);

int main() {
    SinhVien menu[100] = {
        { 1, "Le Phu Toan", 18, "0932333802" },    
        { 2, "Nguyen Quang Huy", 18, "0932333802" },    
        { 3, "Hoang Minh Dung", 18, "0932333802" },
        { 4, "Trinh Van Minh", 18, "0932333802" },
        { 5, "Le Thi Thu Trang", 18, "0932333802" },
    };
    int choice, n = 5;
    do {
        printf("\n---------Menu-----------");
        printf("\n1. Hien thi danh sach sv ");
        printf("\n2. Them sinh vien ");
        printf("\n3. Sua sinh vien ");
        printf("\n4. Xoa sinh vien ");
        printf("\n5. Tim kiem  ");
        printf("\n6. Sap xep ");
        printf("\n7. Thoat ");
        printf("\nLua chon cua ban:  ");
        scanf("%d", &choice);
        fflush(stdin);
        
        switch(choice) {
            case 1: 
			show(menu, n); 
			break;
            case 2: 
			add(menu, &n); 
			break;
            case 3: 
			update(menu, n); 
			break;
            case 4: 
			del(menu, &n); 
			break;
            case 5: 
			search(menu, n); 
			break;
            case 6: 
			sort(menu, n); 
			break;
            case 7: 
			break;
            default: 
			printf("\nVui long chon dung(1-7)!"); 
			break;
        }
    } while (choice != 7);

    return 0;
}

void show(SinhVien sv[], int n) {
    printf("\nDanh sach sinh vien: ");
    for (int i = 0; i < n; i++) {
        printf("\n\nID: %d", sv[i].id);
        printf("\nTen: %s", sv[i].name);
        printf("\nTuoi: %d", sv[i].age);
        printf("\nSdt: %s ", sv[i].phoneNumber);
    }    
}

void add(SinhVien sv[], int *n) {
    int index;
    printf("\nVi tri them (1 - %d): ", *n + 1);
    scanf("%d", &index);
    
    while (index < 1 || index > (*n) + 1) {
        printf("\nVui long nhap dung!");
        printf("\nVi tri them (1 - %d): ", (*n) + 1);
        scanf("%d", &index);
    }
    fflush(stdin);
    
    for (int i = *n; i >= index; i--) {
        sv[i] = sv[i - 1];
    }
    
    sv[index - 1].id = *n + 1;
    printf("\nNhap ten sv: ");
    fgets(sv[index - 1].name, sizeof(sv[index - 1].name), stdin);
    int len = strlen(sv[index - 1].name);
    if (len > 0 && sv[index - 1].name[len - 1] == '\n') {
        sv[index - 1].name[len - 1] = '\0';
    }

    printf("Nhap tuoi: ");
    scanf("%d", &sv[index - 1].age);
    fflush(stdin);

    printf("\nNhap sdt: ");
    fgets(sv[index - 1].phoneNumber, sizeof(sv[index - 1].phoneNumber), stdin);
    len = strlen(sv[index - 1].phoneNumber);
    if (len > 0 && sv[index - 1].phoneNumber[len - 1] == '\n') {
        sv[index - 1].phoneNumber[len - 1] = '\0';
    }
    
    (*n)++;
    show(sv, *n);
}

void update(SinhVien sv[], int n) {
    int index;
    printf("\nVi tri sua (1 - %d): ", n);
    scanf("%d", &index);
    
    while (index < 1 || index > n) {
        printf("\nVui long nhap dung!");
        printf("\nVi tri sua (1 - %d): ", n);
        scanf("%d", &index);
    }
    fflush(stdin);
    
    printf("\nNhap ten sv: ");
    fgets(sv[index - 1].name, sizeof(sv[index - 1].name), stdin);
    int len = strlen(sv[index - 1].name);
    if (len > 0 && sv[index - 1].name[len - 1] == '\n') {
        sv[index - 1].name[len - 1] = '\0';
    }

    printf("Nhap tuoi: ");
    scanf("%d", &sv[index - 1].age);
    fflush(stdin);

    printf("\nNhap sdt: ");
    fgets(sv[index - 1].phoneNumber, sizeof(sv[index - 1].phoneNumber), stdin);
    len = strlen(sv[index - 1].phoneNumber);
    if (len > 0 && sv[index - 1].phoneNumber[len - 1] == '\n') {
        sv[index - 1].phoneNumber[len - 1] = '\0';
    }
    
    show(sv, n);
}

void del(SinhVien sv[], int *n) {
    int index;
    printf("\nVi tri xoa (1 - %d): ", *n);
    scanf("%d", &index);
    
    while (index < 1 || index > *n) {
        printf("\nVui long nhap dung!");
        printf("\nVi tri xoa (1 - %d): ", *n);
        scanf("%d", &index);
    }
    fflush(stdin);
    
    for (int i = index - 1; i < (*n) - 1; i++) {
        sv[i] = sv[i + 1];
    }
    
    (*n)--;
    show(sv, *n);
}

void sort(SinhVien sv[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(sv[j].name, sv[j + 1].name) > 0) {
                SinhVien temp = sv[j];
                sv[j] = sv[j + 1];
                sv[j + 1] = temp;
            }
        }
    }
    show(sv, n);
}

void search(SinhVien sv[], int n) {
    char input[50];
    int count = 0;
    
    printf("\nNhap ten can tim: ");
    fgets(input, sizeof(input), stdin);
    int len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    for (int i = 0; i < n; i++) {
        if (strstr(sv[i].name, input) != NULL) {
            count = 1;
            printf("\nSV can tim: ");
            printf("\n\nID: %d", sv[i].id);
            printf("\nTen: %s", sv[i].name);
            printf("\nTuoi: %d", sv[i].age);
            printf("\nSdt: %s ", sv[i].phoneNumber);
        }
    }

    if (count == 0) {
        printf("\nKhong tim thay sv!");
    }
}

