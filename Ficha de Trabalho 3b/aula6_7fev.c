#include <stdio.h>
int impar(int num)
{
	if(num %2==0)
		return 0;
	else
		return 1;
}
void main()
{
	int n1, res;
	printf("Introduza um número: ");
	scanf("%d", &n1);
	res=impar(n1);
	if(res==0)
		printf("Valor par!\n");
	else
		printf("Valor impar!\n");
}
