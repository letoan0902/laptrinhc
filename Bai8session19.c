#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void del(struct SinhVien sv[], int n);
char *getLastName(char *fullName);

int main() {
    struct SinhVien sv[50] = {
        { 1, "Le Phu Toan", 18, "0932333802" },    
        { 2, "Nguyen Quang Huy", 18, "0932333802" },    
        { 3, "Hoang Minh Dung", 18, "0932333802" },
        { 4, "Trinh Van Minh", 18, "0932333802" },
        { 5, "Le Thi Thu Trang", 18, "0932333802" },
    };
    del(sv, 5);
    return 0;
}

void del(struct SinhVien sv[], int n) {
    for (int i=0; i<n;i++) {
        for (int j=0; j<n-i-1;j++) {
            if (strcmp(getLastName(sv[j].name), getLastName(sv[j+1].name)) >0) {
                struct SinhVien temp = sv[j+1];
                sv[j+1] = sv[j];
                sv[j] = temp;
            }
        }
    }
    printf("Ket qua: ");
    for (int i = 0; i < n; i++) {
        printf("\n\nID: %d", sv[i].id);
        printf("\nTen: %s", sv[i].name);
        printf("\nTuoi: %d", sv[i].age);
        printf("\nSdt: %s ", sv[i].phoneNumber);
    } 
}

char *getLastName(char *fullName) {
    int length = strlen(fullName);
    for (int i = length - 1; i >= 0; i--) {
        if (fullName[i] == ' ') {
            return fullName + i + 1;
        }
    }
    return fullName;
}

