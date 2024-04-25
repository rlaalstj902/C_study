#include <stdio.h>

void main()
{
	
	for (int a=2; a<=9; a++){
		printf("#Á¦%d´Ü# ",a);}
		printf("\n\n");

	for (int i=1; i<=9; i++) {
		for (int k=2; k<=9; k++){
			printf("%2dX%2d=%2d", i, k, i*k);}
			printf("\n");
	}
}

