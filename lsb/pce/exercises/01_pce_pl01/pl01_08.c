#include <stdio.h>
#include <math.h>  // Incluir a livraria math.h

int main() {
    float cateto1, cateto2, hipotenusa;

    // Solicitar os valores dos catetos ao utilizador
    printf("Enter the length of the first leg (cateto): ");
    scanf("%f", &cateto1);

    printf("Enter the length of the second leg (cateto): ");
    scanf("%f", &cateto2);

    // Calcular a hipotenusa usando o Teorema de Pitágoras
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

    // Exibir o comprimento da hipotenusa
    printf("The length of the hypotenuse is: %.2f\n", hipotenusa);

    return 0;
}
