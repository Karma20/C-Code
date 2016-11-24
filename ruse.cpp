#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

// Declaro las variables op1, op2, resultado
// Pedir op1 y op2 al usuario.
// poner resultado =0
//
//	 Si op2 es impar 
// 		Acumular op1 en resultado
//	Divide op2 / 2 
//	DUplica op1
//Repetir si op1 > 0

	int op1, o1,
	    op2, o2,
	    resultado = 0;

	printf("OPerando 1: ");
	scanf(" %i", &op1);
	o1 = op1;

	printf("OPerando 2: ");
	scanf(" %i", &op2);
	o2 = op2;
	do {
	if (op2 % 2 == 1)
	   resultado += op1;
	op2 >>= 1; 
	op1 <<= 1;
	} while ( op2 > 0);

	printf(" %i x %i = %i\n", o1, o2, resultado);

return EXIT_SUCCESS;
}
