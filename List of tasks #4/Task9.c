#include <stdio.h>

int getSmallestNumber(int *firstNumber, int *secondNumber);

int main() {
	int firstNumber = 54;
	int secondNumber = 23;
	
	printf("The smallest number is: %d", getSmallestNumber(&firstNumber, &secondNumber));
	
	return 0;
}

int getSmallestNumber(int *firstNumber, int *secondNumber) {
	return (*firstNumber < *secondNumber) ? *firstNumber : *secondNumber;
}
