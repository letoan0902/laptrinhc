#include<stdio.h>
#include<string.h>
void ham(char *a,int size){
	int i;
	char b[size];
	for(i=0;i<size;i++){
		b[i]=a[size-i-1];
	}
	printf("%s",b);
}
int main (){
	char a[100];
	printf("Nhap vao mot chuoi: ");
	fgets(a,100,stdin);
	int size = strlen(a);
	ham(a,size);
	return 0;
} 
