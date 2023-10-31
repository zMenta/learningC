#include <stdio.h>
#include <strings.h>

// Exercise:
// Keep typing values until the next values is the double or half of the last value.
// On stop, print the quanity of values typed, que sum of all the values, and the last 2 values typed.

int main(void){
	int sum = 0;
	int index = 0;
	int value = 0;
	int last_value;

	do {
		last_value = value;
		printf("Type a value:\n");
		scanf("%d", &value);

		sum += value;
		index++;
    } while (last_value != value*2 && last_value != value/2);

	printf("Num of values: %d\n", index);
	printf("Sum: %d\n", sum);
	printf("%d\n", last_value);
	printf("%d\n", value);
}
