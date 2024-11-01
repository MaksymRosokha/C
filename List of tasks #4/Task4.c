#include <stdio.h>

int power(double number, int pow);

int main() {
	
	printf("%ld", power(3.1, 2) + power(5.5, 3) + 24);
	
	return 0;
}

int power(double number, int pow) {
	double result = 1;
	
	for(int i = 1; i <= pow; i++) {
		result *= number;
	}
	return result;
}

