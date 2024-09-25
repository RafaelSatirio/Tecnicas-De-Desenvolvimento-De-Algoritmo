#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int opcao;
	
	printf("Entre com o valor de opção: ");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Comando executado pq o case coincidiu com a opção a");
			break;
		
		case 2:
			printf("Comando executado pq o case coincidiu com a opção b");
			break;
		
		case 3:
			printf("Comando executado pq o case coincidiu com a opção c");
			break;
		
		default:
			printf("Não corresponde com nenhuma opção");
			break;
	}
	printf("\nAcabamos de sair do switch");
}
