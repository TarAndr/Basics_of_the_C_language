#include <stdio.h>
#include <stdlib.h>

int* makeIntArr(int n) {
	int* arr = (int*) malloc(sizeof(int) * n);
	for(int i = 0; i < n; i++) *(arr + i) = 0;
	return arr;
}

int main() {
	
	char calculate;
	
	int arrSize;
	
	do{
		printf("\n\tEnter needed array size\n");
		
		scanf("%d", &arrSize);
		
		int* myArr = makeIntArr(arrSize);
		
		for(int i = 0; i < arrSize; i++) printf("%d ", *(myArr + i));
		printf("\n");
		for(int i = 0; i < arrSize; i++) *(myArr + i) = (i + 4) * 3;
		for(int i = 0; i < arrSize; i++) printf("%d ", *(myArr + i));
		printf("\n");
		for(int i = 0; i < arrSize; i++) myArr[i] = (i + 2) * 3;
		for(int i = 0; i < arrSize; i++) printf("%d ", myArr[i]);
		
		printf("\n\n\n For exit rnter \"0\", for continue \"1\" \n ");
		scanf("%s", &calculate);
		free(myArr);
	} while(calculate != '0');
	
	return 0;
}