//6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
//ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
//reprovação caso contrário. A função deve exibir mensagens para os dois casos.

#include <stdio.h>
void classificarNota(double nota) {
    if (nota >= 7) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
}
int main() {
    double nota;
    // Entrada de dados
    printf("Digite a nota do aluno (de 0 a 10): ");
    scanf("%lf", &nota);
    if (nota < 0 || nota > 10) {
        printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
    } else {
        // Classificar a nota
        classificarNota(nota);
    }
    return 0;
}
