#include <stdio.h>

int main(){
	
	char text[]="hello world ";
	int size=strlen(text);
	char dex;
	printf("Nhap ki tu muon xoa ");
	scanf("%c",&dex);
	for (int i=0;i<size;i++){
		if (text[i]==dex){
			for (int j=i;j<size;j++){
				text[j]=text[j+1];
			}
			size--;
			i--;
		}
	}
	printf("%s",text);
	
	
	
	return 0;
}
