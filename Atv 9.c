//9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
//Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
//Utilize as alíquotas e deduções conforme a tabela abaixo:
//● Até R$ 2.112,00: Isento
//● De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
//● De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
//● De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
//● Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)
//Use a estrutura condicional aninhada para calcular o imposto corretamente.

#include <stdio.h>
void calcularIRRF(double salarioBruto) {
    double imposto;
    if (salarioBruto <= 2112.00) {
        // Isento
        imposto = 0.0;
    } else if (salarioBruto <= 2826.65) {
        // Alíquota de 7,5% com dedução de R$ 158,40
        imposto = salarioBruto * 0.075 - 158.40;
    } else if (salarioBruto <= 3751.05) {
        // Alíquota de 15% com dedução de R$ 370,40
        imposto = salarioBruto * 0.15 - 370.40;
    } else if (salarioBruto <= 4664.68) {
        // Alíquota de 22,5% com dedução de R$ 651,73
        imposto = salarioBruto * 0.225 - 651.73;
    } else {
        // Alíquota de 27,5% com dedução de R$ 884,96
        imposto = salarioBruto * 0.275 - 884.96;
    }
    printf("O valor do IRRF a ser pago é: R$ %.2f\n", imposto > 0 ? imposto : 0.0);
}
int main() {
    double salarioBruto;

    printf("Digite o valor do salário bruto: R$ ");
    scanf("%lf", &salarioBruto);
    calcularIRRF(salarioBruto);
    return 0;
}
