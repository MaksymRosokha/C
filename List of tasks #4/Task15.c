#include <stdio.h>

void range(int fromNumber, int toNumber);

int main() {
	int fromNumber = 5;
	int toNumber = 97;
	
	range(fromNumber, toNumber);
	
	return 0;
}

void range(int fromNumber, int toNumber) {
	int userNumber;
	int isNotCorrectInput = 1;
	do {
		printf("Enter a number which between %d and %d: ", fromNumber, toNumber);
		scanf("%d", &userNumber);
		
		if(userNumber >= fromNumber && userNumber <= toNumber) {
			isNotCorrectInput = 0;
		} else {
			printf("You enterd %d which isn\'t between %d and %d\n", userNumber, fromNumber, toNumber);
			printf("Try again!\n");
		}
	}while(isNotCorrectInput);
	
	printf("You enterd %d which is between %d and %d", userNumber, fromNumber, toNumber);
}
