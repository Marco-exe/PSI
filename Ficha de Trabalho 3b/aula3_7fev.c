#include <stdio.h>
void converter(int horas, int minutos)
{
	horas=horas*60;
	printf("Número de minutos: %d\n", horas+minutos);
}
void main()
{
	int hor, min;
	printf("Introduza número de horas: ");
	scanf("%d", &hor);
	printf("Introduza número de minutos: ");
	scanf("%d", &min);
	converter(hor, min);
}

