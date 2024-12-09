#include <stdio.h>

struct fraction{
	double numerator;
	double denominator;
};

struct fraction sumFractions(struct fraction f1, struct fraction f2);
struct fraction differenceFractions(struct fraction f1, struct fraction f2);
struct fraction multiplicationFractions(struct fraction f1, struct fraction f2);
struct fraction divisionFractions(struct fraction f1, struct fraction f2);

void printFraction(struct fraction f);
double calcFraction(struct fraction f);

int main(){
	struct fraction f1 = {1, 2};
	struct fraction f2 = {5, 3};
	
	struct fraction sum = sumFractions(f1,f2);
	struct fraction difference = differenceFractions(f1,f2);
	struct fraction multiplication = multiplicationFractions(f1,f2);
	struct fraction division = divisionFractions(f1,f2);
	
	printf("Fraction f1: ");
	printFraction(f1);
	printf("Fraction f2: ");
	printFraction(f2);
	printf("Sum of fractions: ");
	printFraction(sum);
	printf("Difference of fractions: ");
	printFraction(difference);
	printf("Multiplication of fractions: ");
	printFraction(multiplication);
	printf("Division of fractions: ");
	printFraction(division);
	
	return 0;
}

struct fraction sumFractions(struct fraction f1, struct fraction f2){
	struct fraction sum;
	
	sum.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
	sum.denominator = f1.denominator * f2.denominator;
	
	return sum;
}

struct fraction differenceFractions(struct fraction f1, struct fraction f2){
	struct fraction difference;
	
	difference.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
	difference.denominator = f1.denominator * f2.denominator;
	
	return difference;
}

struct fraction multiplicationFractions(struct fraction f1, struct fraction f2){
	struct fraction multiplication;
	
	multiplication.numerator = f1.numerator * f2.numerator;
	multiplication.denominator = f1.denominator * f2.denominator;
	
	return multiplication;
}

struct fraction divisionFractions(struct fraction f1, struct fraction f2){
	if (f2.denominator == 0) {
        printf("Error: Division by zero.\n");
        return (struct fraction){0, 1};
    }
	struct fraction temp = {f2.denominator, f2.numerator};
	return multiplicationFractions(f1, temp);
}

double calcFraction(struct fraction f){
	return f.denominator == 0 ? -1 : f.numerator / f.denominator;
}

void printFraction(struct fraction f){
	printf("%.2lf/%.2lf\n", f.numerator, f.denominator);
}
