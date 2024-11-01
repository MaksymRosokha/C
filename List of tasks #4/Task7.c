#include <stdio.h>

int get_number(int fromNumber, int toNumber);

int main() {
	get_number(5, 50);
	return 0;
}

int get_number(int fromNumber, int toNumber){
	int userNumber, notCorrectNumber = 1;
	
	do {
		printf("\nEnter number from %d to %d: ", fromNumber, toNumber);
		scanf("%d", &userNumber);
		if (userNumber >= fromNumber && userNumber <= toNumber) {
			notCorrectNumber = 0;
			printf("%d is between %d and %d \n", userNumber, fromNumber, toNumber);
		} else {
			printf("The number is not if area from %d to %d \nTry again\n", fromNumber, toNumber);
		}
		
	} while(notCorrectNumber);
	
	return userNumber;
}
