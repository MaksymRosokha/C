#include <stdio.h>

char getMark(int mark);
int getBiggestNumberInOctal(unsigned int number);

int main() {
	/*int mark = 0;
	printf("Enter mark: ");
	scanf("%d", &mark);
	printf("%c", getMark(mark));*/
	
	int numberInOctal = 0;
	printf("Enter number in octal system: ");
	scanf("%o", &numberInOctal);
	printf("%o", getBiggestNumberInOctal(numberInOctal));
	
	return 0;
}

char getMark(int mark) {
	int mark2 = mark/10;
	switch(mark2) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: {
			return 'E';
		}
		case 6: {	
			return 'D';	
		}
		case 7: {	
			return 'C';	
		}
		case 8: {		
			return 'B';
		}
		case 9:
		case 10: {		
			return 'A';
		}
		default: {
			return 'Z';
		}
	}
}


int getBiggestNumberInOctal(unsigned int number) {
	int max = 0;
	while (number / 8) {
		if(max < number % 8) {
			max = number % 8;
		}
		number /= 8;
	}
	return max;
}






