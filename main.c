#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input_int;
	float input_float;


	printf("enter the integer : ");
	scanf("%d", &input_int);
	
	printf("enter the float : ");
	scanf("%f", &input_float);
	
	printf("integer : %d, float : %f\n", input_int, input_float);
	
	return 0;	
	}
