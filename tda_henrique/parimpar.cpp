#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	printf("Digite um n�mero:");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf("O n�mero que voc� digitou � par!");
	} else {
		printf("O n�mero que voc� digitou � �mpar!");
	}
	



}
