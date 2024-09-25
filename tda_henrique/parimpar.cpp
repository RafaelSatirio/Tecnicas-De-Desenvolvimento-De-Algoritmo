#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um número:");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf("O número que você digitou é par!");
	} else {
		printf("O número que você digitou é ímpar!");
	}
	



}
