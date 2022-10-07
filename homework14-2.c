#include <stdio.h>

struct Rectangle{
	unsigned int l;
	unsigned int w;
	unsigned int p;
	unsigned int s;
};

typedef struct Rectangle rect;

rect* calcPerArea(rect* r) {
	r -> p = (r -> l + r -> w) * 2;
	r -> s = r -> l * r -> w;
	return r;
}

int main() {
	
	char calculate;
	
	rect myRect;
	
	do{
		printf("\n\tEnter rectangle length\n");
		scanf("%d", &myRect.l);
		printf("\n\tEnter rectangle width\n");
		scanf("%d", &myRect.w);
		calcPerArea(&myRect);
		printf("\n\tPerimeter = %d", myRect.p);
		printf("\n\tArea = %d", myRect.s);
		printf("\n\n\n For exit rnter \"0\", for continue \"1\" \n ");
		scanf("%s", &calculate);
	} while(calculate != '0');
	
	return 0;
}