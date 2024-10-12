void task3();

//Prints a number which has the most divisors
void task3(){
	int maxValue = 100;
	int divisorNumber, divisorAmount = 0;
	int number = 1;
	
	while(number < maxValue) {
		int divisorIterator = 1;
		int tempDivisorAmount = 0;
		
		while(divisorIterator <= number) {
			if(number % divisorIterator == 0){
				tempDivisorAmount++;
			}
			divisorIterator++;
		}
		if(divisorAmount < tempDivisorAmount) {
			divisorNumber = number;
			divisorAmount = tempDivisorAmount;
		}
		number++;
	}
	
	printf("The number that has the most divisors is: %d\n", divisorNumber);
	printf("It has %d divisors\n", divisorAmount);
}
