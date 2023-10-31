#include <stdio.h>

// Exercise, type N, return the first N perfect values.

int main(void){
	int input;
	int sum;
	int index = 0;
	int current_num = 1;

	printf("Type a number:");
	scanf("%d", &input);

	while (index < input) {
		sum = 0;

		// Get sum of divisible numbers of current_num
		for (int i = 1; i < current_num; i++) {
			if(current_num % i == 0){
				sum += i;
			}
		}

		// Check if number is perfect
		if (current_num == sum) {
			printf("%d\n", current_num);
			index++;
		}

		current_num++;
	}
}
