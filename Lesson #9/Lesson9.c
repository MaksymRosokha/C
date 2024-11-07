#include <stdio.h>

void funkcja2(unsigned int *p, unsigned int x);

int main() {
	unsigned int x = 6;
	unsigned int result;
	funkcja2(&result, x);
	
	printf("Product divisors of %u is: %u", x, result);
	return 0;
}

void funkcja2(unsigned int *p, unsigned int x) {
	*p = 1;
	for(int i = 1; i <= x; i++) {
		if(x % i == 0){
			*p *= i;
		}
	}
}


