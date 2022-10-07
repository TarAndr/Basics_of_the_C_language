#include <stdio.h>

char* digTObin(int a, char* A) {
	int sign = ((a < 0) ? 1 : 0);
	A[0] = '0';
	A[1] = 'b';
	for(int i = sizeof(int) * 8; i > 0; i--) {
		A[i + 1] = ((a % 2) ? '1' : '0');
		a /= 2;
	}
	if(sign) {
		A[2] = '1';
	}
	A[sizeof(int) * 8 + 2] = '\0';
	return A;
}

int main() {
	
	int aa;
	char calculate;
	char Aa[sizeof(int) * 8 + 3];
	
	do{
		printf("\n\tEnter number for convert it to binari format:\n");
		scanf("%d", &aa);
		printf("\n\tNumber %d = %s",aa, digTObin(aa, Aa));
		printf("\n\n\n For exit rnter \"0\", for continue \"1\" \n ");
		scanf("%s", &calculate);
	} while(calculate != '0');
	
	return 0;
}