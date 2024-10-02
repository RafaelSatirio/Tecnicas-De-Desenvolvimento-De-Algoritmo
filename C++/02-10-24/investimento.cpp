#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	float capital_inicial, taxa_juros, valor_anual, saldo_investimento;
	int anos;
	
	printf("Digite seu Capital Incial: ");
	scanf("%f", &capital_inicial);
	
	printf("Digite a taxa de juros anual: ");
	scanf("%f", &taxa_juros);

	printf("Digite a quantidade de anos: ");
	scanf("%d", &anos);
	
	saldo_investimento = capital_inicial;
	for(int i = 1; i <= anos; i++){
		valor_anual = saldo_investimento * pow(1+taxa_juros, i);
		
		printf("Valor acumulado no ano %d é de: %.2f\n", i, valor_anual);
	}
	printf("Valor Final do investimento: %.2f ", valor_anual);
}
