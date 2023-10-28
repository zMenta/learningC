#include <stdio.h>

int main(){
	int input;

	printf("-------------------------------\n");
	printf("Triangular number checker\n");
	printf("-------------------------------\n");
	printf("Type a integer number:\n");
	scanf("%d", &input);
	printf("-------------------------------\n");

	for (int i = 0;	i < input-2; i++) {
		if(input == i*(i+1)*(i+2)){
			printf("%d\n", 1);
			return 0;
		}
	}

	printf("%d\n", 0);
	return 0;
}
