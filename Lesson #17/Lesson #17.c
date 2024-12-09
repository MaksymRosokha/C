#include <stdio.h>

struct goods {
	char name[30];
	double price;
};

void sortGoods(struct goods* arr, int length);
void printGoods(struct goods* arr, int length);

int main(){
	struct goods arrGoods[] = {{"vacuum cleaner", 500}, {"kettle", 80}, {"mixer", 120}, {"microwave", 200}, {"oven", 170}};
	int length = sizeof(arrGoods) / sizeof(arrGoods[0]);
	
	printf("----------Goods before sorting by name:---------- \n");
	printGoods(arrGoods, length);
	
	sortGoods(arrGoods, length);
	
	printf("----------Goods after sorting by name:---------- \n");
	printGoods(arrGoods, length);
	
	return 0;
}

void sortGoods(struct goods* arr, int length){
	for(int i = 0; i < length; i++){
		struct goods min = arr[i];
		int minInd = i;
		
		for(int j = i; j < length; j++){
			if(strcmp(min.name, arr[j].name) > 0){
				min = arr[j];
				minInd = j;
			}
		}
		
		struct goods temp = arr[i];
		arr[i] = min;
		arr[minInd] = temp;
	}
}

void printGoods(struct goods* arr, int length){
	struct goods* end = arr + length;
	
	while(arr < end){
		printf("%s %5.2lf\n", arr->name, arr->price);
		arr++;
	}
	printf("\n");
}
