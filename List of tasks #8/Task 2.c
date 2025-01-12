#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void replaceSpacesToUnderlines(char* str1, char* str2);

int main(){
	char* str1 = malloc(sizeof(char) * 100);
	char* str2 = malloc(sizeof(char) * 100);
	
	strcpy(str1, "Hello World! My name is Maksym Rosokha");
	
	replaceSpacesToUnderlines(str1, str2);
	
	printf("Old string: %s\n", str1);
	printf("New string: %s\n", str2);
	
	free(str1);
	free(str2);
	
	return 0;
}

void replaceSpacesToUnderlines(char* str1, char* str2){
	for(int i = 0; str1[i] != '\0'; i++){
		str2[i] = str1[i] == ' ' ? '_' : str1[i];
	}
	str2[strlen(str1)] = '\0';
}
