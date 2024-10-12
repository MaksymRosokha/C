void task2();
int countFiguresInNumber(int number);
int findBiggestFigure(int arr[], int arrLenght);
int sumFiguresInArray(int arr[], int arrLenght);


//Print all figures in number, sum them and print the biggest one
void task2() {
	int number;
	
	printf("Enter number to split it: ");
	scanf("%d", &number);
	
	int amountOfFigures = countFiguresInNumber(number);
	int figures[amountOfFigures];
	int iterator = 0;
	
	if(amountOfFigures > 1) {
		while(number/10 >= 1) {
			int figure = number % 10;
			printf("%d\n", figure);
			figures[iterator] = figure;
			
			iterator++;
			number /= 10;
			
			if(number/10 < 1) {
				printf("%d\n", number);
				figures[amountOfFigures-1] = number;
			}
		}
	} else {
		printf("%d\n", number);
		figures[iterator] = number;
	}
	
	printf("The biggest figure is: %d\n", findBiggestFigure(figures, amountOfFigures));
	printf("Sum of figures equals: %d\n", sumFiguresInArray(figures, amountOfFigures));
}

int countFiguresInNumber(int number){
	int count = 0;
	
	if(number / 10 < 1) {
		return 1;
	}
	
	while(number/10 >= 1) {
		count++;
		number /= 10;
		
		if(number/10 < 1) {
			count++;
		}
	}
	return count;
}

int findBiggestFigure(int arr[], int arrLenght){
	int biggestFigure = arr[0];
	int i = 1;
	for(; i<arrLenght; i++){
		if(biggestFigure < arr[i]){
			biggestFigure = arr[i];
		}
	}
	return biggestFigure;
}

int sumFiguresInArray(int arr[], int arrLenght) {
	int sum = 0;
	int i = 0;
	for(; i<arrLenght; i++){
		sum+=arr[i];
	}
	return sum;
}
