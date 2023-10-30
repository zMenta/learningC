#include <stdio.h>
#include <math.h>

int main(void){
	int input;
	int last_input;
	int result = 1;
	int index = 0;

	// Square-number validator
	// Returns 1 with the second value is the square number of the first input.
	
	printf("Digit value:\n");
	scanf("%d", &input);
	while (input != 0) {
		last_input = input;
		printf("Digit value:\n");
		scanf("%d", &input);

		if(pow(last_input,2) != input && index % 2 == 0){
			result = 0;
			printf("result defined\n");
		}

		index++;
	}
	
	printf("Result: %d\n", result);
}
