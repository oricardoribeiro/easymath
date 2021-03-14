#include <stdio.h>
#include <stdlib.h>

void versao_titulo(void)
{

	system("reset");
	printf("##############################################\n");
	printf("#           Matemática V 0.1                 #\n");
	printf("##############################################\n");
	printf("\n\n");
}

void logo_opcao(void)
{
	versao_titulo();
	printf("Selecione a opção desejada: ");
	printf("\n\n1 - Calcule sua potencia");
	printf("\n2 - Calcule a soma de 2 números");
	printf("\n3 - Calcule a subtração de 2 números");
	printf("\n4 - Calcule a divisão de 2 números");
	printf("\n5 - Calcule a multiplicação de 2 números");
	printf("\n7 - Sair");
	printf("\n\n");
	printf("Opção: ");
}
