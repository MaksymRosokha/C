#include <stdio.h>

double sumModuluses(float *firstNumber, float *secondNumber);

int main() {
	float firstNumber = -12.432;
	float secondNumber = 32.54;
	
	printf("The sum of moduls = %f", sumModuluses(&firstNumber, &secondNumber));
	
	return 0;
}

double sumModuluses(float *firstNumber, float *secondNumber) {
	if(*firstNumber < 0) {
		*firstNumber *= -1;
	}
	if(*secondNumber < 0) {
		*secondNumber *= -1;
	}
	return *firstNumber + *secondNumber;
}
