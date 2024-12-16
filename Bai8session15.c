#include <stdio.h>

int main(){
	
	char str[]="hello world";
	str[0]=toupper(str[0]);
	for (int i=0;i<strlen(str);i++){
		if (str[i]==' '){
			str[i+1]=toupper(str[i+1]);
		}
	}
	printf("%s",str);
	
	
	
	return 0;
}
