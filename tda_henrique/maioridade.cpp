#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int idade;
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Voc� � maior de idade!");
	} else {
		printf("Voc� � menor de idade!");
	}
	
}
