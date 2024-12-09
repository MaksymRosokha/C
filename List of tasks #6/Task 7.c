#include <stdio.h>

struct Car{
	char mark[100];
	char model[100];
	unsigned int year;
	unsigned int price;
};

void printMostExpencive(struct Car cars[], int length);
void printYoungest(struct Car cars[], int length);
void printAveragePrice(struct Car cars[], int length);

int main(){
	
	struct Car cars[3];
	int length = sizeof(cars) / sizeof(cars[0]);
	
	strcpy(cars[0].mark, "Mercedes");
    strcpy(cars[0].model, "X");
	cars[0].year = 2015;
	cars[0].price = 200000;
	
	strcpy(cars[0].mark, "BMW");
    strcpy(cars[0].model, "Y");
	cars[1].year = 2005;
	cars[1].price = 30000;
	
	strcpy(cars[0].mark, "Ferrari");
    strcpy(cars[0].model, "Z");
	cars[2].year = 2022;
	cars[2].price = 9000000;
	
	printMostExpencive(cars, length);
	printYoungest(cars, length);
	printAveragePrice(cars, length);
	
	return 0;
}

void printMostExpencive(struct Car cars[], int length){
	unsigned int highestPrice = cars[0].price;
	
	for(int i = 0; i < length; i++){
		if(cars[i].price > highestPrice){
			highestPrice = cars[i].price;
		}
	}
	
	printf("The most expencive car has %u$\n", highestPrice);
}


void printYoungest(struct Car cars[], int length){
	unsigned int youngestCar = cars[0].year;
	
	for(int i = 0; i < length; i++){
		if(cars[i].year > youngestCar){
			youngestCar = cars[i].year;
		}
	}
	
	printf("The youngest car has %u\n", youngestCar);
}


void printAveragePrice(struct Car cars[], int length){
	unsigned int averagePrice = 0;
	unsigned int sumPrices = 0;
	
	for(int i = 0; i < length; i++){
		sumPrices += cars[i].price;
	}
	
	averagePrice = sumPrices / length;
	
	printf("Cars average price is %u\n", averagePrice);
}
