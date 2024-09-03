#include<stdio.h>
#include<locale.h>

main() {
	
	setlocale(LC_ALL,"portuguese");
	
	float num1, num2, soma;
	num1 = 6;
	num2 = 8;
	soma = num1 + num2;
	
	printf("A soma entre: %f" , num1);
	printf(" e: %f" , num2);
	printf(" é: %f" , soma);
}

