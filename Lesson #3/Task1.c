void task1();
void selectSort(int arr[], int arrayLenght);
void printArray(int arr[], int arrayLenght);

void task1() {
	int arrayLenght = 5;
	int arr [arrayLenght];
	int iterator;
	
	printf("Enter 5 elements of array to sort them:\n");
	for(iterator = 0; iterator < arrayLenght; iterator++){
		printf("Enter %d element: ", iterator);
		scanf("%d", &arr[iterator]);
	}
	selectSort(arr, arrayLenght);
	printArray(arr, arrayLenght);	
}

void selectSort(int arr[], int arrayLenght) {
	int oldPosition = 0;
	int minNumber = arr[0];
	int i,j;
	
	for(i = 0; i < arrayLenght; i++) {
		for (j = i; j < arrayLenght; j++) {
			if(minNumber > arr[j]){
				minNumber = arr[j];
				oldPosition = j;
			}
		}
		
		arr[oldPosition] = arr[i];
		arr[i] = minNumber;
		minNumber = arr[i+1];
	}
}

void printArray(int arr[], int arrayLenght){
	int i;
	for(i = 0; i < arrayLenght; i++) {
		printf("Array[%d] = %d\n", i, arr[i]);
	}
}
