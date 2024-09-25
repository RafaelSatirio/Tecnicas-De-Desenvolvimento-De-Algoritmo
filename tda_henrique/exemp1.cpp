#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float num1, num2, num3, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &num1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &num2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &num3);
	
	
	media = (num1+num2+num3)/3;
	
	printf("A média do aluno é %.2f", media);
	
	return 0;
}
