#include <stdio.h>
void calculadora(int n1, int n2)
{
	printf(" Soma: %d;\n Produto: %d;\n Diferença: %d;\n Quociente: %d\n", n1+n2, n1*n2, n1-n2, n1/n2);
}
void main()
{
	int v1, v2;
	printf("Introduza dois números: ");
	scanf("%d%d", &v1, &v2);
	calculadora(v1, v2);
}
