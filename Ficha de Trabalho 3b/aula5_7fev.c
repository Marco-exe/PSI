#include <stdio.h>
float funcao(int n1, int n2, int n3, int n4)
{
	return ((n1+n2+n3+n4)/4);
}
void main()
{
	int v1, v2, v3, v4;
	printf("Introduza 4 valores: ");
	scanf("%d%d%d%d", &v1, &v2, &v3, &v4);
	printf("Média dos números: %.2f\n", funcao(v1, v2, v3, v4));
}

