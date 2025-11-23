
#include <stdio.h>

int main() {
    float numA, numB, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &numA);
    printf("Digite o segundo valor: ");
    scanf("%f", &numB);
    media = (numA + numB) / 2;
    printf("%.1f e %.1f é %.1f.\n", numA, numB, media);

    return 0;
}
