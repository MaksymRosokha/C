#include <stdio.h>

int main() {
	char c = '$';
	int i = 123;
	double d = 321.123;
	long double ld = 987654321.123456789;
	
	printf("Value of char variable = %c\nThe adress of this variable is: %lld\n\n", c, &c);
	printf("Value of int variable = %d\nThe adress of this variable is: %lld\n\n", i, &i);
	printf("Value of double variable = %f\nThe adress of this variable is: %lld\n\n", d, &d);
	printf("Value of long double variable = %lf\nThe adress of this variable is: %lld\n\n", ld, &ld);
	
	
	char *ptrC = &c;
	int *ptrI = &i;
	double *ptrD = &d;
	long double *ptrLd = &ld;
	printf("\nPointers\n");
	printf("Value of char variable = %c\nThe adress of this variable is: %lld\n\n", *ptrC, ptrC);
	printf("Value of int variable = %d\nThe adress of this variable is: %lld\n\n", *ptrI, ptrI);
	printf("Value of double variable = %f\nThe adress of this variable is: %lld\n\n", *ptrD, ptrD);
	printf("Value of long double variable = %lf\nThe adress of this variable is: %lld\n\n", *ptrD, ptrD);
	
	return 0;
}
