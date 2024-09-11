//12. Desenvolva uma função que receba o valor venal de um imóvel e calcule o valor
//do IPTU com base na tabela abaixo:
//● Até R$ 100.000,00: Alíquota de 1%
//● De R$ 100.000,01 até R$ 300.000,00: Alíquota de 1,5%
//● De R$ 300.000,01 até R$ 500.000,00: Alíquota de 2%
//● Acima de R$ 500.000,00: Alíquota de 2,5%
//Use a estrutura condicional aninhada para aplicar a alíquota corretamente.

#include <stdio.h>
float calcularIPTU(float valorVenal) {
    float iptu;
    if (valorVenal <= 100000.00) {
        iptu = 0.01 * valorVenal; // Alíquota de 1%
    } else {
        if (valorVenal <= 300000.00) {
            iptu = 0.015 * valorVenal; // Alíquota de 1,5%
        } else {
            if (valorVenal <= 500000.00) {
                iptu = 0.02 * valorVenal; // Alíquota de 2%
            } else {
                iptu = 0.025 * valorVenal; // Alíquota de 2,5%
            }
        }
    }
    return iptu;
}
int main() {
    float valorVenal, iptu;
    printf("Digite o valor venal do imóvel: R$ ");
    scanf("%f", &valorVenal);
    iptu = calcularIPTU(valorVenal);

    printf("O valor do IPTU é: R$ %.2f\n", iptu);
    return 0;
}
