#include <stdio.h>
int findHowManyFives(unsigned int number);

int main() {
	
	printf("The number has %d fives",findHowManyFives(54625555));
	
	return 0;
}

int findHowManyFives(unsigned int number) {
	int amount = 0;

	while(number != 0){
		if(number%10 == 5) {
			amount++;
		}
		number /= 10;
	}
	return amount;
}

/*

Task 1
1 2
7 8
1 2

Task 2
2
1

Task 3
x=1 y=1 z=1
x=3 y=2 z=2
x=5 y=3 z=3
x=1 y=9 z=3

Task 4
1 2
2 2

Task 5
1
0
0
1
0
6

Task 6
2
-2
1.00
1.50
1.50
1.50
1.50
1.50

*/
