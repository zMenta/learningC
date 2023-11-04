#include <stdio.h>

int main(void){
	int input;	
	int result;
	int sum = 0;
	int remainer = 0;
	int value_to_add;

	printf("Type a int value:");
	scanf("%d", &input);

	result = input * 37;
	/* Examples
	111 % 10 = 1
	555 % 10 = 5
	7777 % 10 = 7
	22 % 10 = 2 */
	value_to_add = result % 10;

	int multiplier = 10;
	while (result != remainer) {
		remainer = result % multiplier;
		sum += value_to_add;
		multiplier *= 10;
		// printf(" ->%d\n", remainer);
	}

	printf("Result: %d\n", result);
	printf("Sum: %d\n", sum);

	if (sum == input){
		printf("Output: Sim!\n");
	}else {
		printf("Output: Nao!\n");
	}

	printf("\n");
}
