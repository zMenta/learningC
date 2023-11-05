#include <stdio.h>

// Input N, write down fibonacci

int main(void){
	int input = 0;
	int last_value = 0;
	int current_value = 1;
	int holder = 0;

	printf("Type a integer number:");
	scanf("%d", &input);
	for (int i = 0; i < input; i++) {
		printf("%d ", current_value);
		holder = current_value;
		current_value += last_value;
		last_value = holder;
	}

	printf("\n");
}
