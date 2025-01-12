#include <stdio.h>
#include <string.h>

void reverse(char* str);

int main(){
	char str[] = "Hello World!";
	reverse(str);
	printf("%s\n", str);
	
	return 0;
}

void reverse(char* str){
	int length = strlen(str);
	
	for(int i = 0, j = length-1; i < length/2 || j > length / 2; i++, j--){
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
