#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int opcao;
	
	printf("Entre com o valor de op��o: ");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Comando executado pq o case coincidiu com a op��o a");
			break;
		
		case 2:
			printf("Comando executado pq o case coincidiu com a op��o b");
			break;
		
		case 3:
			printf("Comando executado pq o case coincidiu com a op��o c");
			break;
		
		default:
			printf("N�o corresponde com nenhuma op��o");
			break;
	}
	printf("\nAcabamos de sair do switch");
}
