#include <stdio.h>

int binary(unsigned int number);

int main () {
	printf("%d", binary(10));
	return 0;
}

int binary(unsigned int number){
	int ones = 0;
	
	while(number/2.0) {
		if((number / 2.0) != (number / 2)){
			ones++;
		}
		number /= 2;
	}
	return ones;
}
