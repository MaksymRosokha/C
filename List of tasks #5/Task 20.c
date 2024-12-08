#include <stdio.h>
#include <stdlib.h>

void print_array(int* arr, int length);
void complete_array(int* arr, int length);
int* create_array(int k);
void bubble_sort(int* startArray, int* endArray);
void swap(int* first, int* second);

int main() {
	int amountArrays = 5;
	int arraysSizes[amountArrays];
	int* arrs[amountArrays];
	
	for(int i = 0; i < amountArrays; i++){
		printf("Enter size for %d array: ", i);
		scanf("%d", &arraysSizes[i]);
		arrs[i] = create_array(arraysSizes[i]);
		
		print_array(arrs[i], arraysSizes[i]);
		
		bubble_sort(arrs[i], arrs[i]+arraysSizes[i]-1);
		printf("After bubble sorting:\n");
		print_array(arrs[i], arraysSizes[i]);
		printf("\n----------------------------------------------------------------\n");
		
		free(arrs[i]);
	}
	
	return 0;
}

void bubble_sort(int* startArray, int* endArray){
	int* iterator1 = startArray;
	
	while(iterator1 <= endArray){
		int* iterator2 = startArray;
		
		while(iterator2 < endArray){
			int* num1 = iterator2;
			int* num2 = iterator2 + 1;
			
			if(*num1 > *num2){
				swap(num1, num2);
			}
			
			iterator2++;
		}

		iterator1++;
	}
}

void swap(int* first, int* second){
	int temp = *first;
	*first = *second;
	*second = temp;
}

int* create_array(int k){
	int* arr = (int*) malloc(sizeof(int) * k);
	complete_array(arr, k);
	return arr;
}


void complete_array(int* arr, int length){
	int* end = arr + length;
	
	for (; arr < end; arr++) {
	    *arr = (rand() % 200) - 100;
	}
}


void print_array(int* arr, int length){
	int* end = arr + length;
	
	for (int i = 0; arr < end; arr++, i++) {
		if(i % 20 == 0){
			printf("\n");
		}
		printf("%5d", *arr);
	}
	printf("\n");
}
