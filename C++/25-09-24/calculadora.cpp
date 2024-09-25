#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	int opcao, quantidade;
	float soma = 0, divisao, multi, subtracao,numero, numero2;
	
	printf("Digite o c�digo da opera��o\n 1.soma \n 2.divis�o \n 3.multiplica��o \n 4.subtra��o \n");
	scanf("%d", &opcao);
	
	while(opcao < 1 || opcao > 4){
		printf("Digite um n�mero de 1 at� 4 \n");
		printf("Digite o c�digo da opera��o\n 1.soma \n 2.divis�o \n 3.multiplica��o \n 4.subtra��o \n");
		scanf("%d", &opcao);
	}
	
	switch (opcao){
		case 1:
			printf("Quantos n�meros deseja somar? \n");
			scanf("%d", &quantidade);
			while(quantidade < 2){
				printf("Precisa de pelo menos 2 n�meros para somar!");
				printf("Quantos n�meros deseja somar? \n");
				scanf("%d", &quantidade);
			}
			for (int i = 1; i <= quantidade; i++){
				printf("Digite o %d� n�mero da soma: ", i);
				scanf("%f", &numero2);
				soma += numero2;
			}
			printf("A soma dos n�meros �: %2.f\n", soma);
			break;
		case 2:
			printf("Qual o primeiro n�mero da divis�o? \n ");
			scanf("%f", &numero);
			printf("Qual o segundo n�mero da divis�o? \n ");
			scanf("%f", &numero2);
			divisao = numero / numero2;
			printf("A divis�o dos n�meros �: %.2f\n", divisao);
			break;
		case 3:
			printf("Quantos n�meros deseja multiplicar? \n");
			scanf("%d", &quantidade);
			while(quantidade < 2){
				printf("Precisa de pelo menos 2 n�meros para multiplicar!");
				printf("Quantos n�meros deseja multiplicar? \n");
				scanf("%d", &quantidade);
			}	
			for (int i = 1; i <= quantidade; i++){
				printf("Digite o %d� n�mero da multiplica��o: ", i);
				scanf("%f", &numero2);
				if(i == 1){
					multi = numero2;
				}
				if(i >= 2){
					multi *= numero2;
				}
			}
			printf("A multiplica��o dos n�meros �: %2.f\n", multi);
			break;
		case 4:
			printf("Quantos n�meros deseja subtrair? \n");
			scanf("%d", &quantidade);
			while(quantidade < 2){
				printf("Precisa de pelo menos 2 n�meros para subtrair!");
				printf("Quantos n�meros deseja subtrair? \n");
				
				scanf("%d", &quantidade);
			}	
			for (int i = 1; i <= quantidade; i++){
				printf("Digite o %d� n�mero da subtra��o: ", i);
				scanf("%f", &numero2);
				if(i == 1){
					subtracao = numero2;
				}
				if(i >= 2){
					subtracao -= numero2;
				}
			}
			printf("A subtra��o dos n�meros �: %2.f\n", subtracao);
			break;
	}
}
