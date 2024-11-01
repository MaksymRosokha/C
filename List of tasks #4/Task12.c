#include <stdio.h>

void bigger_number(double *firstNumber, double *secondNumber);

int main() {
	double firstNumber = 23.52;
	double secondNumber = -32.6;
	double *ptrFirstNumber = &firstNumber;
	double *ptrSecondNumber = &secondNumber;
	
	bigger_number(ptrFirstNumber, ptrSecondNumber);
	
	printf("First number %lf\n", *ptrFirstNumber);
	printf("Second number %lf", *ptrSecondNumber);
	
	return 0;
}

void bigger_number(double *firstNumber, double *secondNumber) {
	if(*firstNumber > *secondNumber) {
		*secondNumber = *firstNumber;
	} else {
		*firstNumber = *secondNumber;
	}
}
