#include <stdio.h>
#include <strings.h>

// Exercise:
// Keep typing values until the next values is the double or half of the last value.
// On stop, print the quanity of values typed, que sum of all the values, and the last 2 values typed.

int main(void){
	int sum = 0;
	int index = 1;
	int value;
	int last_value = 0;

	printf("Type a value:\n");
	scanf("%d", &value);
	sum += value;
	while (last_value != value*2 && last_value != value/2) {
		last_value = value;

		printf("Type a value:\n");
		scanf("%d", &value);

		sum += value;
		index++;
	}

	printf("Num of values: %d\n", index);
	printf("Sum: %d\n", sum);
	printf("%d\n", last_value);
	printf("%d\n", value);
}
