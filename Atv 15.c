//15. Crie um programa que converta um valor monetário entre três moedas: real
//(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
//moeda de destino e o valor a ser convertido. As taxas de conversão são as
//seguintes:
//● 1 USD = 5.30 BRL
//● 1 EUR = 6.20 BRL
//● 1 BRL = 0.19 USD
//● 1 BRL = 0.16 EUR
//O programa deve calcular e exibir o valor convertido. Se a moeda informada não for
//reconhecida, o programa deve exibir uma mensagem de erro.

#include <stdio.h>
#include <string.h>
int main() {
    char moedaOrigem[4], moedaDestino[4];
    float valor, valorConvertido;
    const float USD_to_BRL = 5.30;
    const float EUR_to_BRL = 6.20;
    const float BRL_to_USD = 0.19;
    const float BRL_to_EUR = 0.16;
    printf("Informe a moeda de origem (BRL, USD, EUR): ");
    scanf("%3s", moedaOrigem);
    printf("Informe a moeda de destino (BRL, USD, EUR): ");
    scanf("%3s", moedaDestino);
    printf("Informe o valor a ser convertido: ");
    scanf("%f", &valor);
    if (strcmp(moedaOrigem, "BRL") == 0) {
        if (strcmp(moedaDestino, "USD") == 0) {
            valorConvertido = valor * BRL_to_USD;
            printf("Valor convertido: %.2f USD\n", valorConvertido);
        } else if (strcmp(moedaDestino, "EUR") == 0) {
            valorConvertido = valor * BRL_to_EUR;
            printf("Valor convertido: %.2f EUR\n", valorConvertido);
        } else if (strcmp(moedaDestino, "BRL") == 0) {
            printf("Valor convertido: %.2f BRL\n", valor);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else if (strcmp(moedaOrigem, "USD") == 0) {
        if (strcmp(moedaDestino, "BRL") == 0) {
            valorConvertido = valor * USD_to_BRL;
            printf("Valor convertido: %.2f BRL\n", valorConvertido);
        } else if (strcmp(moedaDestino, "EUR") == 0) {
            valorConvertido = valor * USD_to_BRL * BRL_to_EUR;
            printf("Valor convertido: %.2f EUR\n", valorConvertido);
        } else if (strcmp(moedaDestino, "USD") == 0) {
            printf("Valor convertido: %.2f USD\n", valor);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else if (strcmp(moedaOrigem, "EUR") == 0) {
        if (strcmp(moedaDestino, "BRL") == 0) {
            valorConvertido = valor * EUR_to_BRL;
            printf("Valor convertido: %.2f BRL\n", valorConvertido);
        } else if (strcmp(moedaDestino, "USD") == 0) {
            valorConvertido = valor * EUR_to_BRL * BRL_to_USD;
            printf("Valor convertido: %.2f USD\n", valorConvertido);
        } else if (strcmp(moedaDestino, "EUR") == 0) {
            printf("Valor convertido: %.2f EUR\n", valor);
        } else {
            printf("Erro: Moeda de destino não reconhecida.\n");
        }
    } else {
        printf("Erro: Moeda de origem não reconhecida.\n");
    }
    return 0;
}
