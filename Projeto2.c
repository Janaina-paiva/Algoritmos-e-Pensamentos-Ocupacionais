#include <stdio.h>

int main() {
    int numA, numB;  // duas variáveis de entrada
    int resultado;   // variável para armazenar a soma

    // Primeira soma
    printf("Digite o 1º numero: ");
    scanf("%i", &numA);

    printf("Digite o 2º numero: ");
    scanf("%i", &numB);

    resultado = numA + numB;
    printf("%i + %i = %i\n", numA, numB, resultado);

    // Nova soma usando o resultado como terceira variável
    printf("Digite outro numero para somar ao resultado anterior: ");
    scanf("%i", &numB);  // reutilizando numB como nova entrada

    resultado = resultado + numB;
    printf("Resultado anterior + %i = %i\n", numB, resultado);

    return 0;
}
