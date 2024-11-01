#include <stdio.h>

void printRectangle(char sign, unsigned int wigth, unsigned int height);

int main() {
	printRectangle('$', 10, 10);
	return 0;
}

void printRectangle(char sign, unsigned int wigth, unsigned int height){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < wigth; j++){
			printf("%c ", sign);
		}	
		printf("\n");
	}
}
