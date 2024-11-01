#include <stdio.h>

void changeValues(int *firstNumber, int *secondNumber);

int main() {
	int firstNumber = -12;
	int secondNumber = -32;
	int *ptrFirstNumber = &firstNumber;
	int *ptrSecondNumber = &secondNumber;
	
	changeValues(ptrFirstNumber, ptrSecondNumber);
	
	printf("First number %d\n", *ptrFirstNumber);
	printf("Second number %d", *ptrSecondNumber);
	
	return 0;
}

void changeValues(int *firstNumber, int *secondNumber) {
	if(*firstNumber > *secondNumber) {
		int temp = *secondNumber;
		*secondNumber = *firstNumber;
		*firstNumber = temp;
	}
}
