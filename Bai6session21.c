#include<stdio.h>


int main (){
	FILE *fptr;
	FILE *fptr2;
	char bt01[50];
	int soDong=0,i;
	fptr = fopen("bt01.txt","r");
	fptr2 = fopen("bt06.txt","w");
	while (fgets(bt01, 50, fptr) != NULL) {
    	fprintf(fptr2,"%s",bt01);
    	soDong++;
    }
	for(i=0;i<soDong;i++){
	fgets(bt01, 50, fptr2);
	printf("%s",bt01);	
	}
	fclose(fptr);	
	fclose(fptr2);	
	return 0;
}

