#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPolindrome(char* str);

int main(){
	char str[] = "qwerewq";
	
	printf("Is sentence polinmdrome?: %d", isPolindrome(str));
	
	return 0;
}

bool isPolindrome(char* str){
	int length = strlen(str);
	
	for(int i = 0, j = length - 1; i < length / 2 || j > length / 2; i++, j--){
		if(str[i] != str[j]){
			return false;
		}
	}
	
	return true;
}
