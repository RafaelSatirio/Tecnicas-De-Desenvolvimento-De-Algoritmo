#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	int codigoCargo;
	float salarioAtual, salarioAjustado, valorAumento;

	printf("Digite o seu cargo atual: 1.gerente,2.programador,3.financeiro,4.rh: ");
	scanf("%d", &codigoCargo);
	printf("Digite o seu salário atual: ");
	scanf("%f",&salarioAtual);
	
	if(codigoCargo == 1){
		salarioAjustado = salarioAtual + salarioAtual * 0.10;
	} 
    if(codigoCargo == 2){
		salarioAjustado = salarioAtual + salarioAtual * 0.08;
	}
	if(codigoCargo == 3){
		salarioAjustado = salarioAtual + salarioAtual * 0.06;
	}
	if(codigoCargo == 4){
		salarioAjustado = salarioAtual + salarioAtual * 0.05;
	}
	
	printf("O salário reajustado é de: %.2f", salarioAjustado);
	

	
	
}
