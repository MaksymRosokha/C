#include <stdio.h>

int findBiggestNumber (int firstNumber, int secondNumber, int thirdNumber);

int main() {
	int firstNumber, secondNumber, thirdNumber, biggestNumber;
	
	printf("- - - Enter three numbers to get the biggest one - - -\n");
	
	printf("Enter first number: ");
	scanf("%d", &firstNumber);
	printf("Enter second number: ");
	scanf("%d", &secondNumber);
	printf("Enter third number: ");
	scanf("%d", &thirdNumber);
	
	biggestNumber = findBiggestNumber(firstNumber, secondNumber, thirdNumber);
	
	printf("\nThe biggest number is: %d", biggestNumber);
	
	return 0;
}

/**
Compares three numbers and returs the biggest number
*/
int findBiggestNumber(int firstNumber, int secondNumber, int thirdNumber) {
	int biggestNumber = firstNumber;
	
	if(biggestNumber < secondNumber){
		biggestNumber = secondNumber;
	}
	if(biggestNumber < thirdNumber) {
		biggestNumber = thirdNumber;
	}
	
	return biggestNumber;
}
