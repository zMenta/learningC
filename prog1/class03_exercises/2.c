#include <stdio.h>
#include <math.h>

int main(void){
	int input0;
	int input1;

	// Square-number validator
	printf("Please type a sequence of numbers, type 0 to end the sequence.\n");

	do{
		printf("Type the first value:\n");
		scanf("%d", &input0);
		if(input0 == 0){break;}

		printf("Type the second value:\n");
		scanf("%d", &input1);

		if(pow(input0, 2) == input1){
			printf("%d\n", 1);
		}else {
			printf("%d\n", 0);
		}

	} while (input1 != 0);
	
	printf("\n");
}
