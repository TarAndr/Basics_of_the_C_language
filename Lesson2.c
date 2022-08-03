#include <stdio.h>

int main() {
    printf("This is the first row \n");
    printf("This is the new row with \t tab, ");
    printf("this is the \\ symbol, ");
    printf("and this is the end \0 of row. \n");
    printf("Text with %03d%% \n" , 99);
	int a;
    printf("Please input digit for integer 'a' \n");
	scanf("%d", &a);
    printf("Integer 'a' is %d \n" , &a);
    printf("Integer 'a' adress is %p \n" , &a);
    getchar();
    return 0;
}