#include <stdio.h>
void converter(float graus)
{
	graus=((graus*9)/5)+32;
	printf("Temperatura em Fahrenheit: %.1f\n", graus);
}
void main()
{
	int op;
	printf("Introduza graus em Celsius: ");
	scanf("%d", &op);
	converter(op);
}
