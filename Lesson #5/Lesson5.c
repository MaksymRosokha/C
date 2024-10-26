#include <stdio.h>
int getBiggerNumber(int a, int b);
int getBiggerNumberFromThree(int a, int b, int c);
void getKindOfNumberA(unsigned int number);
char* getKindOfNumberB(unsigned int number);
void printTriangle(int height);
int calcPowerOf2(int power);


int main () {
	int number;
	printf("Enter height: ");
	scanf("%d", &number);
	printTriangle(number);

	return 0;
}

int getBiggerNumber(int a, int b) {
	return (a > b) ? a : b;
}

int getBiggerNumberFromThree(int a, int b, int c) {
	int bigger = a;
	if(bigger < b) {
		bigger = b;
	}
	if(bigger < c) {
		bigger = c;
	}
	return bigger;
}

void getKindOfNumberA(unsigned int number) {
	if(number < 10) {
		printf("small number");
	} else if (number < 1000) {
		printf("a just such number");
	} else if (number < 1000000) {
		printf("big number");
	} else {
		printf("large number");
	}
}

char* getKindOfNumberB(unsigned int number) {
	if(number < 10) {
		return "small number";
	} 
	if (number < 1000) {
		return "a just such number";
	} 
	if (number < 1000000) {
		return "big number";
	} 
	
	return "large number";
}

void printTriangle(int height) {
	int no;
	int nx = 1;
	int wight = 1;
	for (int i = 1; i < height; i++) {
		wight += 2;
	}
	no = wight - nx;
	
	
	for(int row = 0; row < height; row++){
		int half = no / 2;
		
		for(int i = 0; i < half; i++) {
			printf(" ");
		}
		for(int i = 0; i < nx; i++) {
			printf("X");
		}
		for(int i = 0; i < half; i++) {
			printf(" ");
		}
		printf("\n");
		nx+=2;
		no-=2;
	}
}

int calcPowerOf2(int power){
	int result = 1;
	for(int i = 1; i <= power; i++) {
		result *= 2;
	}
	return result;
}





