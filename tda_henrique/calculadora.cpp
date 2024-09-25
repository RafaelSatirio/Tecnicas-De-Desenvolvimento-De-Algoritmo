#include<stdio.h>
#include<locale.h>
#include<string.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int operacao;
	float num1, num2, resultado;
	float soma, subtracao, multiplicacao, divisao;
	
	
	printf("Escolha qual operação você deseja fazer: 1. soma, 2.subtracao, 3.multiplicacao, 4.divisao: ");
	scanf("%d", &operacao);
	printf("Digite o primeiro número:");
	scanf("%f", &num1);
	printf("Digite o segundo número:");
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
			printf("Não corresponde a nenhuma opção!/n");
			break;
					
	}
	
	printf("O resultado da operação que você escolheu é: %.1f", resultado);
	
	return 0;
}
