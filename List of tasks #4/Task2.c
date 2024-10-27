#include <stdio.h>

double max(double a, double b);

int main() {
	
	printf("%lf", max(3.1415, 2.5));
	
	return 0;
}

double max(double a, double b) {
	return a > b ? a : b;
}

