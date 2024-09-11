#include <cstdio>    // Necess�rio para printf e scanf
#include <cstring>   // Necess�rio para strcmp
#include <cctype>    // Necess�rio para tolower
#include <locale.h>  // Necess�rio para setlocale

int main() {
    // Configura a localidade para portugu�s
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int cargo;
    float salario, salarioAjustado;
    // Solicita o cargo do usu�rio
    printf("Digite o seu cargo: 1.gerente\n2.programador\n3.financeiro\n4.rh\n");
    scanf("%d", &cargo);
    // Valida a entrada do cargo
    while (cargo < 1 || cargo > 4) {
        printf("Digite um valor entre 1 e 4.\n");
        printf("Digite o seu cargo: 1.gerente\n2.programador\n3.financeiro\n4.rh\n");
        scanf("%d", &cargo);
    }
    // Solicita o sal�rio do usu�rio
    printf("Digite o seu sal�rio: ");
    scanf("%f", &salario);
    // Ajusta o sal�rio com base no cargo
    switch (cargo) {
        case 1:
            salarioAjustado = salario + salario * 0.10;
            break;
        case 2:
            salarioAjustado = salario + salario * 0.08;
            break;
        case 3:
            salarioAjustado = salario + salario * 0.06;
            break;
        case 4:
            salarioAjustado = salario + salario * 0.05;
            break;
    }
    // Imprime o sal�rio ajustado
    printf("Seu sal�rio aumentou de R$ %.2f para R$ %.2f\n", salario, salarioAjustado);
}

