#include <stdio.h>

int main() {
	int mode = 1;
	float Uo, Ui, R1, R2;
	while(mode) {
    printf("\n For calculation Uo enter 1 \n");
    printf(" For calculation Ui enter 2 \n");
    printf(" For calculation R1 enter 3 \n");
    printf(" For calculation R2 enter 4 \n");
    printf(" For exit enter 0 \n");
	scanf("%d", &mode);
	switch(mode) {
		case 1:
		printf("\n Calculation Uo: \n Please input Ui \n");
		scanf("%f", &Ui);
		printf("Please input R1 \n");
		scanf("%f", &R1);
		printf("Please input R2 \n");
		scanf("%f", &R2);
		Uo = Ui * (R1 / (R1 + R2));
		printf("Uo = %f \n", Uo);
		break;
	
		case 2:
		printf("\n Calculation Ui: \n Please input Uo \n");
		scanf("%f", &Uo);
		printf("Please input R1 \n");
		scanf("%f", &R1);
		printf("Please input R2 \n");
		scanf("%f", &R2);
		Ui = Uo * (R1 + R2) / R1;
		printf("Ui = %f \n", Ui);
		break;
	
		case 3:
		printf("\n Calculation R1: \n Please input Uo \n");
		scanf("%f", &Uo);
		printf("Please input Ui \n");
		scanf("%f", &Ui);
		printf("Please input R2 \n");
		scanf("%f", &R2);
		R1 = Uo * R2 / (Ui - Uo);
		printf("R1 = %f \n", R1);
		break;
		
		case 4:
		printf("\n Calculation R2: \n Please input Uo \n");
		scanf("%f", &Uo);
		printf("Please input Ui \n");
		scanf("%f", &Ui);
		printf("Please input R1 \n");
		scanf("%f", &R1);
		R2 = R1 * (Ui - Uo) / Uo;
		printf("R2 = %f \n", R2);
		break;
		
		default:
		break;
		}
	}
    return 0;
}