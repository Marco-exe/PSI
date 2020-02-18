#include <stdio.h>
void formato(int minutos)
{
	int horas=minutos/60;
	minutos=minutos%60;
	printf("%02d:%02d\n", horas, minutos);
}
void main()
{
	int min;
	printf("Introduza número de minutos: ");
	scanf("%d", &min);
	formato(min);
}

