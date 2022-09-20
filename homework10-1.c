#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int calculateSquareEquality(int a, int b, int c, float* x1, float* x2) {
	
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				return 1;
			}
			return -1;
		}
		if (c == 0) {
			*x1 = 0;
			*x2 = 0;
			return 0;
		}
		*x1 = -c / b;
		*x2 = -c / b;
		return 0;
	}
	
	if (b == 0) {
		if (c == 0) {
			*x1 = 0;
			*x2 = 0;
			return 0;
		}
		if (-c / a > 0) {
			*x1 = -sqrt(-c / a);
			*x2 = sqrt(-c / a);
			return 1;
		}
		return -1;
	}
	
	if (c == 0) {
		*x1 = 0;
		*x2 = -b / a;
		return 1;
	}
	
	double D = b * b - 4 * a * c;
	
	if (D < 0) {
		return -1;
	}
	
	if (!D) {
		*x1 = -b / (2 * a);
		*x2 = -b / (2 * a);
		return 0;
	}
	
	*x1 = (-b - sqrt(D)) / (2 * a);
	*x2 = (-b + sqrt(D)) / (2 * a);
	return 1;
}

int main() {
	
	int calculate = 1;
	char ABC_chars[3][32];
	float x1, x2;
	
	while (calculate) {
		int ABC[3] = {2, 2, 2};
		ABC_chars[0][0] = 'a';
		ABC_chars[0][1] = '\0';
		ABC_chars[1][0] = 'b';
		ABC_chars[1][1] = '\0';
		ABC_chars[2][0] = 'c';
		ABC_chars[2][1] = '\0';
		printf("\n\n");
		for(int i = 0; i < 4; i++) {
			printf("\n Calculate Square Equality\t %s%s%s",((ABC[0] < 0) ? "- " : "\0") , ABC_chars[0], ((ABC[0] == 0) ? "\0" : "x^2"));
			printf("%s%s%s", ((ABC[1] < 0) ? " - " : ((ABC[1] == 0 || ABC[0] == 0) ? "\0" : " + ")), ABC_chars[1], ((ABC[1] == 0) ? "\0" : "x"));
			printf("%s%s = 0 \n",((ABC[2] < 0) ? " - " : ((ABC[2] == 0 || (ABC[1] == 0 && ABC[0] == 0)) ? "\0" : " + ")) , ((ABC[0] == 0 && ABC[1] == 0 && ABC[2] == 0) ? "0" : ABC_chars[2]));
			if(i == 3)	continue;
			printf("\n Please enter number for \"%s\" \n ", ABC_chars[i]);
			scanf("%d", &ABC[i]);
			if((i == 2 && ABC[i] != 0) || (ABC[i] != 0 && ABC[i] != 1 && ABC[i] != -1)) {
				itoa(((ABC[i] < 0) ? -ABC[i] : ABC[i]), ABC_chars[i], 10);
			} else {
				ABC_chars[i][0] = '\0';
			}
		}
		calculateSquareEquality(ABC[0], ABC[1], ABC[2], &x1, &x2);
		printf("\n\t\tResult:\t\t x1 = %.2f, x2 = %.2f \n", x1, x2);
		printf("\n\n For exit rnter \"0\", for continue \"1\" \n ");
		scanf("%d", &calculate);
	}
	return 0;
}