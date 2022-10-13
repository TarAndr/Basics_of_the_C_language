#include <stdio.h>
#include <math.h>

typedef struct Point{
	double X;
	double Y;
} point;

typedef struct Line{
	double LEN;
	point A;
	point B;
} line;

line calcLineLen(double x1, double y1, double x2, double y2) {
	line calcL;
	calcL.A.X = x1;
	calcL.A.Y = y1;
	calcL.B.X = x2;
	calcL.B.Y = y2;
	calcL.LEN = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return calcL;
}

int main() {
	
	char calculate;
	line myLine;

	do{
		printf("\n\tEnter point \"A\" coordinates \"x\" and \"y\"\n");
		
		scanf("%lf%lf", &myLine.A.X, &myLine.A.Y);
		
		printf("\n\tEnter point \"B\" coordinates \"x\" and \"y\"\n");
		
		scanf("%lf%lf", &myLine.B.X, &myLine.B.Y);
		myLine = calcLineLen(myLine.A.X, myLine.A.Y, myLine.B.X, myLine.B.Y);
		
		printf("\n\tLine length with coordinates:\n\t A (%.2lf; %.2lf) and B (%.2lf; %.2lf)\n\n\t\t Equal %.4lf", myLine.A.X, myLine.A.Y, myLine.B.X, myLine.B.Y, myLine.LEN);
		printf("\n\n\n For exit rnter \"0\", for continue \"1\" \n ");
		
		scanf("%s", &calculate);
	} while(calculate != '0');
	
	return 0;
}