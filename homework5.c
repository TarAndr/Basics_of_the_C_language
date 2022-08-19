#include <stdio.h>

int main() {
	int mode = 1;
	
	while(mode) {
		float Ui, Uo = 0, R1 = 0, R2 = 0;
	
		printf("\n \n __________________________________________________ \n");
		printf(" == Resistive divider calculator V1.0 by TarAndr == \n");
		printf("\n For calculation Uo enter 1 \n");
		printf(" For calculation Ui enter 2 \n");
		printf(" For calculation R1 enter 3 \n");
		printf(" For calculation R2 enter 4 \n");
		printf(" For exit enter 0 \n");
		
		do {
			printf("\n Please enter one number from 0 to 4 \n ");
			scanf("%d", &mode);
		} while (mode < 0 || mode > 4);
		
		switch(mode) {
			
			case 1:
			printf("\n Calculating U OUT: \n ");
			break;
		
			case 2:
			printf("\n Calculating U INPUT: \n ");
			break;
		
			case 3:
			printf("\n Calculating R1: \n ");
			break;
			
			case 4:
			printf("\n Calculating R2: \n ");
			break;
			
			default:
			return 0;
		}
			
		if(mode != 1) {
			do {
				printf("\n Please write OUTPUT voltage in Volts\n ");
				scanf("%f", &Uo);
			} while (Uo <= 0);
		}
		
		if(mode != 2) {
			do {
				printf("\n Please write real INPUT voltage in Volts\n ");
				scanf("%f", &Ui);
			} while (Ui <= Uo);
		}
		
		if(mode != 3) {
			do {
				printf("\n Please input real R1 in Oms\n ");
				scanf("%f", &R1);
			} while (R1 <= 0);
		}
		
		if(mode != 4) {
			do {
				printf("\n Please input real R2 in Oms\n ");
				scanf("%f", &R2);
			} while (R2 < 0);
		}
		
		printf("\n Result: ");
		
		switch(mode) {
			
			case 1:
			Uo = Ui * (R1 / (R1 + R2));
			printf(" Uo = %.2f Volt\n", Uo);
			break;
		
			case 2:
			Ui = Uo * (R1 + R2) / R1;
			printf(" Ui = %.2f Volt\n", Ui);
			break;
		
			case 3:
			R1 = Uo * R2 / (Ui - Uo);
			printf(" R1 = %.2f Om\n", R1);
			break;
			
			case 4:
			R2 = R1 * (Ui - Uo) / Uo;
			printf(" R2 = %.2f Om\n", R2);
			break;
		}
	}
    return 0;
}