#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int idade;
	char sexo[20];
		
	printf("Entre com a idade e o sexo da pessoa (separados por um espaço)");
	scanf("%d %s", &idade, &sexo);
	if( idade >= 18 && stricmp (sexo, "masculino") == 0)
		printf("Tem que se alistar!");
	  else
	    printf("Segue a vida");
	  
}
