#include <stdio.h>
#include <string.h>

void compareStrings(char* str1, char* str2);

int main(){
	char str1[] = "Hellow";
	char str2[] = "Helloa";
	
	compareStrings(str1, str2);
	
	return 0;
}

void compareStrings(char* str1, char* str2){
	
	if(strcmp(str1, str2) < 0){
		printf("First string is bigger than second one.");
	} else if(strcmp(str1, str2) > 0){
		printf("First string is smaller than second one.");
	} else {
		printf("The strings are equal.");
	}
}
