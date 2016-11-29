#include <stdio.h>
#include <stdlib.h>

int main(){

	int dni, pos;
	char letra[23] ={
	'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'
	};

	printf("DNI: ");
	scanf(" %i", &dni);

	pos = dni % 23;
	printf("tu letra es: ");
	printf("%c \n", letra[pos]);
	return EXIT_SUCCESS;
}
