//2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
//bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
//divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
//por 400.

#include <stdio.h>

int verifica_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (verifica_bissexto(ano)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}

