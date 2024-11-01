#include <stdio.h>

void decomposeFractionalNumber(double number);

int main() {
	double number = 435.532;
	decomposeFractionalNumber(number);
	
	return 0;
}

void decomposeFractionalNumber(double number) {
	int integer = (int) number;
	double remainder;
	double tempNumber = number;
	
	while(tempNumber >= 1) {
		tempNumber--;
	}
	remainder = tempNumber;
	
	printf("The number = %f\nThe integer of the number = %d\nThe remainder of the number = %f", number, integer, remainder);
}
