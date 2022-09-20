#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char text;
	int i;
	
	printf("input a haracter :");
	scanf("%c", &text);
	
	printf("The next character of %c (%d) is %c (%d)\n", text, text);
	return 0;
}
