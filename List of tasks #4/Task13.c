#include <stdio.h>

void setPointerValue(int n, int *w);

int main() {
	int number = 324;
	int numberForPointer = 2334;
	int *pointer = &numberForPointer;
	
	setPointerValue(number, pointer);
	
	printf("Pointer value = %d\n", *pointer);
	
	return 0;
}

void setPointerValue(int n, int *w) {
	*w = n;
}
