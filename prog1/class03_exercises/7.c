#include <stdio.h>

// Factorial

int main(void){
	int input = 0;
	int result = 1;

	printf("Type an integer number >= 1: ");
	scanf("%d", &input);
	for(int i = input; i > 0; i--){
		result *= i;
	}

	printf("Result: %d\n", result);
}
