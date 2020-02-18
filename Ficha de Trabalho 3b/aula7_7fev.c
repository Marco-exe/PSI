#include <stdio.h>
int tabuada(int tab1)
{
	int n;
	printf("Tabuada do %d\n", tab1);
	for(n=1; n<=10; n++)
	{
		printf("%d * %d = %d\n", n, tab1, n*tab1);
	}
}
void main()
{
	int n1;
	printf("Introduza um número: ");
	scanf("%d", &n1);
	tabuada(n1);
}
