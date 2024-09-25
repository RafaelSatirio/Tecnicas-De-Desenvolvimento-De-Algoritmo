#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"portuguese");
	int senha;
	
	
	
	printf("Digite sua senha: ");
	scanf("&d",&senha);
	
	if(senha==1234)
		printf("Senha correta!");
	 else 
		printf("Senha incorreta, tente novamente!");
	
	
	
}
