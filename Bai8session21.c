	#include <stdio.h>
	#include <string.h>
	
	struct students {
	    char id[20];
	    char name[50];
	    int age;
	};
	
	int main() {
	    int a = 0;
	    struct students sv[100];
	    FILE *fptr;
	    fptr = fopen("students.txt", "r");
	    while (fscanf(fptr, "%s""%s""%d\n", sv[a].id, sv[a].name, &sv[a].age) != EOF) {
	        a++;
	    }
	    fclose(fptr);
	    printf("\nIn thong tin sinh vien:\n");
	    int i; 
	    for (i=0;i<a;i++) {
	        printf("Sinh viên %d: Id: %s, Ten: %s, Tuoi: %d\n", i+1, sv[i].id, sv[i].name, sv[i].age);
	    }
	    return 0;
	}

