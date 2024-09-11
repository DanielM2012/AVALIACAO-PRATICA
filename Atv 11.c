//11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
//de ICMS com base nas faixas de preço do produto:
//● Até R$ 1.000,00: Desconto de 5%
//● De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
//● Acima de R$ 5.000,00: Desconto de 15%
//Use a estrutura condicional aninhada para aplicar o desconto corretamente.

#include <stdio.h>
float calcularDesconto(float preco) {
    float desconto;
    if (preco <= 1000.00) {
        desconto = 0.05 * preco; // 5% de desconto
    } else {
        if (preco <= 5000.00) {
            desconto = 0.10 * preco; // 10% de desconto
        } else {
            desconto = 0.15 * preco; // 15% de desconto
        }
    } 
    return desconto;
}
int main() {
    float precoProduto, desconto;
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &precoProduto);
    desconto = calcularDesconto(precoProduto);
    printf("O valor do desconto é: R$ %.2f\n", desconto);
    return 0; 
    
}
