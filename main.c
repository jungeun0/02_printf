#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	
	printf("enter the charcter : ");
	scanf("%c", &c);
	
	printf("the next character of %c (%i) is %c (%i)", c, c, c+1, c+1);
	
	return 0;
}
