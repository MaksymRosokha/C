#include <stdio.h>
#include <string.h>

void removeSpaces(char* str);

int main(){
	char str[] = "Hello World. How are you?";
	removeSpaces(str);
	printf("%s\n", str);
	
	return 0;
}

void removeSpaces(char* str){
	int length = strlen(str);
	int countSpaces = 0;
	
	for(int i = 0; i < length; i++){
		if(str[i] == ' '){
			countSpaces++;
			for(int j = i; j < length - countSpaces; j++){
				str[j] = str[j+1];
				
				if(j == length - countSpaces - 1){
					str[j+1] = '\0';
				}
			}
		}
	}
}
