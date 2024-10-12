#include <stdio.h>
#include <math.h>

void printDivisors(int number);
int kalculateFaktorial(int faktorial);
void PythagoreanTheorem ();

int main(){
	int number = 12;
	printDivisors(number);
	
	printf("\n");
	printf("\n");
	
	int numberToFactorial = 5;
	printf("Faktorial of %d = %d\n", numberToFactorial, kalculateFaktorial(numberToFactorial));
	
	printf("\n");
	printf("\n");
	
	PythagoreanTheorem ();
	
	return 0;
}

void printDivisors(int number) {
	int divisor = 1;
	
	while (divisor <= number) {
		if(number % divisor == 0){
			printf("%d\n",divisor);
		}
		divisor++;
	}
}

int kalculateFaktorial(int faktorial) {
	int result = 1;
	int iterator = 1;
	
	while(iterator <= faktorial) {
		result *= iterator;
		iterator++;
	}
	return result;
}

void PythagoreanTheorem () {
	int maxValue = 20;
	int i,j;
	
	for(i = 1; i < maxValue; i++){
		for(j = 1; j < maxValue; j++){
			int twoSidesPower = i*i+j*j;
			if (sqrt(twoSidesPower) == (int)sqrt(twoSidesPower)){
				printf("%d\t%d\t%f\n", i,j,sqrt(twoSidesPower));
			}
		}	
	}
}










