//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
//da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//alíquotas progressivas para calcular o valor da contribuição:
//● Até R$ 1.320,00: 7,5%
//● De R$ 1.320,01 até R$ 2.571,29: 9%
//● De R$ 2.571,30 até R$ 3.856,94: 12%
//● De R$ 3.856,95 até R$ 7.507,49: 14%
//Use a estrutura condicional aninhada para calcular o desconto corretamente.

#include <stdio.h>
void calcularContribuicaoINSS(double salarioBruto) {
    double contribuicao = 0.0;
    double faixa1 = 1320.00;
    double faixa2 = 2571.29;
    double faixa3 = 3856.94;
    double faixa4 = 7507.49;
    if (salarioBruto <= faixa1) {
        contribuicao = salarioBruto * 0.075;
    } else if (salarioBruto <= faixa2) {
        contribuicao = faixa1 * 0.075 + (salarioBruto - faixa1) * 0.09;
    } else if (salarioBruto <= faixa3) {
        contribuicao = faixa1 * 0.075 + (faixa2 - faixa1) * 0.09 + (salarioBruto - faixa2) * 0.12;
    } else if (salarioBruto <= faixa4) {
        contribuicao = faixa1 * 0.075 + (faixa2 - faixa1) * 0.09 + (faixa3 - faixa2) * 0.12 + (salarioBruto - faixa3) * 0.14;
    } else {
        // Caso o salário ultrapasse o teto de R$ 7.507,49
        contribuicao = faixa1 * 0.075 + (faixa2 - faixa1) * 0.09 + (faixa3 - faixa2) * 0.12 + (faixa4 - faixa3) * 0.14;
    }
    printf("O valor da contribuição ao INSS é: R$ %.2f\n", contribuicao);
}
int main() {
    double salarioBruto;
    printf("Digite o valor do salário bruto: R$ ");
    scanf("%lf", &salarioBruto);
    calcularContribuicaoINSS(salarioBruto);
    return 0;
}