#include <stdio.h>

void whatType(char c);
void decompresFraction(double *decimalPart, int *integerPart, double number);

int main(){
	/*int amount = 5;
	int a[amount];
	int k = 0;
	while(k < amount) {
		printf("Enter number: ");
		scanf("%d", &a[k]);
		++k;
	}
	--k;
	while(k >= 0) {
		printf("[%d] = %d\ n", k, a[k]);
		--k;
	}*/
	
	int a2[] = {3,6,7,23,74,2,67,3,7};
	for(int i = 0; i < sizeof(a2)/sizeof(a2[0]); i++){
		int divisors = 0;
		int j = 1;
		while (j <= a2[i]) {
			if(a2[i] % j == 0) {
				divisors++;	
			}
			j++;
		}
		
		printf("[%d] = %d, has %d divisors\n", i, a2[i], divisors);
	}
	
	return 0;
}

void whatType(char c) {
	if(c >= 48 && c <= 57) {
		printf("Digit");
	}
	if(c >= 65 && c <= 90) {
		printf("Big letter");
	}
	if(c >= 97 && c <= 122) {
		printf("Small letter");
	}
}

void decompresFraction(double *decimalPart, int *integerPart, double number) {
	*decimalPart = number - (int)number;
	*integerPart = (int)number;
}
