#include <stdio.h>

unsigned long long getFactorial(int number);

int main() {
	
	//a
	// 4! + 6! - 2!
	unsigned long long a = getFactorial(4) + getFactorial(6) - getFactorial(2);
	printf("%llu\n", a);
	
	
	//b
	int n = 5, k = 2;
	unsigned long long b = getFactorial(n) / getFactorial(k) * getFactorial(n-k);
	printf("%llu\n", b);
	
	return 0;
}

unsigned long long getFactorial(int number) {
	long long result = 1;
	
	for(int i = 2; i <= number; i++) {
		result *= i;
	}
	
	return result;
}
