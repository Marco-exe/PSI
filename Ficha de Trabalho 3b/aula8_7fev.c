#include <stdio.h>
void funcao(int numero1)
{
	switch(numero1)
	{
		case 1: printf("1.....Um!\n"); break;
		case 2: printf("2.....Dois!\n"); break;
		case 3: printf("3.....Três!\n"); break;
		case 4: printf("4.....Quatro!\n"); break;
		case 5: printf("5.....Cinco!\n"); break;
		case 6: printf("6.....Seis!\n"); break;
		case 7: printf("7.....Sete!\n"); break;
		case 8: printf("8.....Oito!\n"); break;
		case 9: printf("9.....Nove!\n"); break;
		case 10: printf("10.....Dez!\n"); break;
		default: printf("ERRO!\nDica: Os números são de 0 a 10.\n");
	}
}
void main()
{
	int n1;
	printf("Introduza um número: ");
	scanf("%d", &n1);
	funcao(n1);
}
