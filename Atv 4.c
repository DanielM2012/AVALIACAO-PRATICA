//4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
//triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
//lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja
//retângulo, a função deverá informar ao usuário que o triângulo é retângulo, caso
//contrário, não deverá fazer nada. 

#include <stdio.h>
void verificarTrianguloRetangulo(double a, double b, double c) {
    double x, y, z;
    if (a >= b && a >= c) {
        x = b;
        y = c;
        z = a;
    } else if (b >= a && b >= c) {
        x = a;
        y = c;
        z = b;
    } else {
        x = a;
        y = b;
        z = c;
    }
    // Verificar se é um triângulo retângulo
    if (z * z == (x * x + y * y)) {
        printf("O triângulo é retângulo.\n");
    }
}
int main() {
    double a, b, c;
    // Entrada de dados
    printf("Digite o comprimento dos três lados do triângulo:\n");
    scanf("%lf  %lf %lf", &a, &b, &c);
verificarTrianguloRetangulo(a, b, c);
  return 0;
}
