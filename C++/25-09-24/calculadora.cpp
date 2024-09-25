#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int opcao, quantidade;
	float soma = 0, divisao, multi, subtracao,numero, numero2;
	
	printf("Digite o código da operação\n 1.soma \n 2.divisão \n 3.multiplicação \n 4.subtração \n");
	scanf("%d", &opcao);
	
	while(opcao < 1 || opcao > 4){
		printf("Digite um número de 1 até 4 \n");
		printf("Digite o código da operação\n 1.soma \n 2.divisão \n 3.multiplicação \n 4.subtração \n");
		scanf("%d", &opcao);
	}
	
	switch (opcao){
		case 1:
			printf("Quantos números deseja somar? \n");
			scanf("%d", &quantidade);
			while(quantidade < 2){
				printf("Precisa de pelo menos 2 números para somar!");
				printf("Quantos números deseja somar? \n");
				scanf("%d", &quantidade);
			}
			for (int i = 1; i <= quantidade; i++){
				printf("Digite o %dº número da soma: ", i);
				scanf("%f", &numero2);
				soma += numero2;
			}
			printf("A soma dos números é: %2.f\n", soma);
			break;
		case 2:
			printf("Qual o primeiro número da divisão? \n ");
			scanf("%f", &numero);
			printf("Qual o segundo número da divisão? \n ");
			scanf("%f", &numero2);
			divisao = numero / numero2;
			printf("A divisão dos números é: %.2f\n", divisao);
			break;
		case 3:
			printf("Quantos números deseja multiplicar? \n");
			scanf("%d", &quantidade);
			while(quantidade < 2){
				printf("Precisa de pelo menos 2 números para multiplicar!");
				printf("Quantos números deseja multiplicar? \n");
				scanf("%d", &quantidade);
			}	
			for (int i = 1; i <= quantidade; i++){
				printf("Digite o %dº número da multiplicação: ", i);
				scanf("%f", &numero2);
				if(i == 1){
					multi = numero2;
				}
				if(i >= 2){
					multi *= numero2;
				}
			}
			printf("A multiplicação dos números é: %2.f\n", multi);
			break;
		case 4:
			printf("Quantos números deseja subtrair? \n");
			scanf("%d", &quantidade);
			while(quantidade < 2){
				printf("Precisa de pelo menos 2 números para subtrair!");
				printf("Quantos números deseja subtrair? \n");
				
				scanf("%d", &quantidade);
			}	
			for (int i = 1; i <= quantidade; i++){
				printf("Digite o %dº número da subtração: ", i);
				scanf("%f", &numero2);
				if(i == 1){
					subtracao = numero2;
				}
				if(i >= 2){
					subtracao -= numero2;
				}
			}
			printf("A subtração dos números é: %2.f\n", subtracao);
			break;
	}
}
