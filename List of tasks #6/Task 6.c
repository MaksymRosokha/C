#include <stdio.h>
#include <stdlib.h>

#define AMOUNT_MARKS 10

struct Student {
	char firstName[50];
	char lastName[50];
	int year;
	char universityDirection[100];
	double marks[AMOUNT_MARKS];
};

void printStudent(struct Student student);
void printStudentsByYear(struct Student students[], int length, int year);
double calcAverageMarkOfStudents(struct Student students[], int length);
void printStudentWithTheHighestMarks(struct Student students[], int length);

int main(){
	int length = 3;
	struct Student students[length];
	
	strcpy(students[0].firstName, "Maksym");
	strcpy(students[0].lastName, "Rosokha");
	students[0].year = 2024;
	strcpy(students[0].universityDirection, "informatyka");
	for(int i = 0; i < AMOUNT_MARKS; i++){
		students[0].marks[i] = (rand() % 3) + 3;
	}
	
	strcpy(students[1].firstName, "Sofia");
	strcpy(students[1].lastName, "Sidii");
	students[1].year = 2023;
	strcpy(students[1].universityDirection, "cyberbezpieczeñstwo");
	for(int i = 0; i < AMOUNT_MARKS; i++){
		students[1].marks[i] = (rand() % 3) + 3;
	}
	
	strcpy(students[2].firstName, "Bogdan");
	strcpy(students[2].lastName, "Razimowski");
	students[2].year = 2024;
	strcpy(students[2].universityDirection, "informatyka");
	for(int i = 0; i < AMOUNT_MARKS; i++){
		students[2].marks[i] = (rand() % 3) + 3;
	}
	
	printStudentsByYear(students, length, 2024);
	
	double averageMark = calcAverageMarkOfStudents(students, length);
	printf("The average mark of all the students is: %.1lf\n\n", averageMark);
	
	printf("The student with the biggest hithest average mark is: \n");
	printStudentWithTheHighestMarks(students, length);
	
	return 0;
}

void printStudent(struct Student student){
	printf("%s\n", student.firstName);
	printf("%s\n", student.lastName);
	printf("%d\n", student.year);
	printf("%s\n", student.universityDirection);
	for(int i = 0; i < 6; i++){
		printf("%.1lf  ", student.marks[i]);
	}
	printf("\n\n");
}

void printStudentsByYear(struct Student students[], int length, int year) {
	for(int i = 0; i < length; i++){
		if(students[i].year == year){
			printStudent(students[i]);
		}
	}
}

double calcAverageMarkOfStudents(struct Student students[], int length){
	double averageMark = 0;
	double sumAllMarks = 0;
	
	for(int i = 0; i < length; i++){
		for(int j = 0; j < AMOUNT_MARKS; j++){
			sumAllMarks += students[i].marks[j];
		}
	}
	
	averageMark = sumAllMarks / (length * AMOUNT_MARKS);
	return averageMark;
}
void printStudentWithTheHighestMarks(struct Student students[], int length){
	double studentsAverageMark[length];
	double sumMarks;
	int indexOfStudentWithHightstMarks = 0;
	
	for(int i = 0; i < length; i++){
		sumMarks = 0;
		
		for(int j = 0; j < AMOUNT_MARKS; j++){
			sumMarks += students[i].marks[j];
		}
		
		studentsAverageMark[i] = sumMarks;
	}
	
	sumMarks = studentsAverageMark[0];
	
	for(int i = 1; i < length; i++){
		if(sumMarks < studentsAverageMark[i]){
			sumMarks = studentsAverageMark[i];
			indexOfStudentWithHightstMarks = i;
		}
	}
	
	printStudent(students[indexOfStudentWithHightstMarks]);
}
