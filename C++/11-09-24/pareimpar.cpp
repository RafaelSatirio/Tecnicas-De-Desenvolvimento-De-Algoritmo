#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	float par, impar;
	int numero;	
		
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("O n�mero que voc� digitou � par");
	} else {
		printf("O n�mero que voc� digitou � impar");
	}

}
