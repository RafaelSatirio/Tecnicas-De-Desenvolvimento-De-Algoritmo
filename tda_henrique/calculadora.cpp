#include<stdio.h>
#include<locale.h>
#include<string.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int operacao;
	float num1, num2, resultado;
	float soma, subtracao, multiplicacao, divisao;
	
	
	printf("Escolha qual opera��o voc� deseja fazer: 1. soma, 2.subtracao, 3.multiplicacao, 4.divisao: ");
	scanf("%d", &operacao);
	printf("Digite o primeiro n�mero:");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero:");
	scanf("%f", &num2);
	
	
	
	switch(operacao)
	{
		case 1:
			resultado = num1+num2;
			break;
			
		case 2:
			resultado = num1-num2;
			break;
			
		case 3:
			resultado = num1*num2;
			break;
			
		case 4:
			resultado = num1/num2;
			break;
				
		default:
			printf("N�o corresponde a nenhuma op��o!/n");
			break;
					
	}
	
	printf("O resultado da opera��o que voc� escolheu �: %.1f", resultado);
	
	return 0;
}
