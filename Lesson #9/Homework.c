#include <stdio.h>

int howManyOnesInBinary1(int number);
void howManyOnesInBinary2(int *count, int number);


int main() {
	int number = 11;
	int count;
	howManyOnesInBinary2(&count, number);
	
	printf("First method: %d in binary has %d ones\n", number, howManyOnesInBinary1(number));
	printf("Second method: %d in binary has %d ones\n", number, count);
	
	return 0;
}

int howManyOnesInBinary1(int number) {
	int count = 0;
	
	while(number){
		if(number % 2) {
			count++;
		}
		number /= 2;
	}
	
	return count;
}

void howManyOnesInBinary2(int *count, int number) {
	*count = 0;
	
	while(number){
		if(number % 2) {
			*count = *count + 1;
		}
		number /= 2;
	}
}
