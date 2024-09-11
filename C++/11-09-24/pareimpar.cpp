#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	float par, impar;
	int numero;	
		
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("O número que você digitou é par");
	} else {
		printf("O número que você digitou é impar");
	}

}
