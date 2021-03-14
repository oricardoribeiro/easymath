#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main(void)
{
	char pausa, opcao;
	float base, resultado, diminuendo, subtraendo, resto, dividendo, divisor, parcela1, parcela2, soma;
	float fator1, fator2, produto;
	int expoente, ind;

	fator1 = fator2 = parcela1 = parcela2 = diminuendo = subtraendo = resto = resultado = divisor = soma = 0;

	versao_titulo();
	printf("A matemática mais fácil ...\n\n");
	sleep(1);
	opcao = '1';
	resultado = 1.0;

	while (opcao != '7')
	{
		logo_opcao();
        	scanf("%c",&opcao);

		switch (opcao)
		{
			case '1':
			
			versao_titulo();	
			printf("Digite a base da potencia: ");
			scanf("%f",&base);
			printf("\nDigite seu expoente: ");
			scanf("%d",&expoente);

			if ((base != 0.0) && (expoente >= 1))
			{
				system("reset");

				for (ind = 0; ind < expoente; ++ind)
					resultado = resultado * base;
				
				printf("Resultado: %6.1f ^ %1.0d = %10.1f\n\n",base, expoente, resultado);
				sleep(3); 
			}
			else
			{
				system("reset");
				printf("Dados invalidos, saindo ...\n");
				sleep(2);
			}
			break;

			case '2':
			
			versao_titulo();
			printf("Digite a primeira parcela: ");
			scanf("%f",&parcela1);
			printf("\nDigite a segunda parcela: ");
			scanf("%f",&parcela2);
			soma = parcela1 + parcela2;
			printf("\nResultado: %.1f\n\n", soma);
			sleep(3);
			break;

			case '3':
			
			versao_titulo();
			printf("Digite o diminuendo: ");
			scanf("%f",&diminuendo);
			printf("\nDigite o subtraendo: ");
			scanf("%f",&subtraendo);
			resto = diminuendo - subtraendo;
			printf("\nResto: %.1f\n\n", resto);
			sleep(3);
			break;

			case '4':
			
			versao_titulo();
			printf("Digite o dividendo: ");
			scanf("%f",&dividendo);
			printf("\nDigite seu diviso: ");
			scanf("%f",&divisor);

			while (divisor == 0)
			{
				system("reset");
				printf("Nenhum número pode ser dividido por 0 !!!\n\n");
				printf("Digite um novo número para o divisor: ");
				scanf("%f", &divisor);
			}

			resultado = dividendo / divisor;
			printf("\nResultado: %.1f\n\n", resultado);
			sleep(3);

			break;

			case '5':
			
			versao_titulo();
			printf("Digite o primeiro fator: ");
			scanf("%f", &fator1);
			printf("\nDigite o segundo fator: ");
			scanf("%f", &fator2);
			produto = fator1 * fator2;
			printf("\nProduto dos fatores: %.1f\n\n", produto);
			sleep(3);

			break;

			case '7':
			system("reset");
			printf("Saindo ...\n\n");
			sleep(2);
			break;
		}
		resultado = 1.0;
		setbuf(stdin, NULL);  // Limpa o buffer do teclado - unistd.h (Melhor que o fflush)
	}


	return(0);
}
