//3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
//formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
//for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
//retornar 1. Caso contrário, não deve retornar nada.

#include <stdio.h>
int verificar_triangulo(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    }
}
int main() {
    int lado1 = 3, lado2 = 4, lado3 = 5; 
    if (verificar_triangulo(lado1, lado2, lado3)) {
        printf("Os lados %d, %d, %d formam um triângulo válido.\n", lado1, lado2, lado3);
    } else {
        printf("Os lados %d, %d, %d não formam um triângulo válido.\n", lado1, lado2, lado3);
    }
    return 0;
}
