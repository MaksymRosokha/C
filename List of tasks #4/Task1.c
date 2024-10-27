#include <stdio.h>

double getAvarageHarmonic(double a, double b);

int main() {
	printf("%lf", getAvarageHarmonic(2, 8));
	return 0;
}

double getAvarageHarmonic(double a, double b){
	double result = (1.0/a + 1.0/b) / 2;
	
	return 1.0/result;
}

