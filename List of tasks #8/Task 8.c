#include <stdio.h>
#include <string.h>

int main(){
	int length = 1000;
	char userStr[length];
	char biggestStr[length];
	int sequenceNumberOfLastStr = 1;
	int sequenceNumberOfBiggestStr = 1;
	
	printf("Write lines!\n");
	printf("The program will give you information about the biggest line.\n");
	printf("To spot writing write \"stop\"\n\n");
	
	scanf("%s", userStr);
	strcpy(biggestStr, userStr);
	
	while(scanf("%s", userStr)){
		sequenceNumberOfLastStr++;
		
		if(strlen(userStr) > strlen(biggestStr)){
			strcpy(biggestStr, userStr);
			sequenceNumberOfBiggestStr = sequenceNumberOfLastStr;
		}
		if(strstr(userStr, "stop") != NULL){
			break;
		}
	}
	
	printf("\nThe biggest line is:\n");
	printf("\t%s\n", biggestStr);
	printf("Its length is: %d\n", strlen(biggestStr));
	printf("Its sequence number is: %d\n", sequenceNumberOfBiggestStr);
	return 0;
}
