#include <stdio.h>
#include <stdlib.h>

char* findChar(char* str, char sign);

int main(){
	char* str = "qwerty";
	char sign = 'r';
	
	char* resultOfLookingFor = findChar(str, sign);
	
	printf("The result of looking for is: %p   %c", resultOfLookingFor, *resultOfLookingFor);
	
	return 0;
}

char* findChar(char* str, char sign){
	char* result = malloc(sizeof(char));
	*result = "\0";
	
	while(*str != '\0'){
		if(*str == sign){
			result = str;
			break;
		}
		str++;
	}
	
	return result;
}
