#include <stdio.h>
#include <ctype.h>  // Biblioteca para chamar a fuunção isDigit(), ou o código da função isDigit segue a baixo para perceberes como funciona

int isDigit(char ch) {
    // Se o caracter estiver entre o caraccter '0' e '9' na tabela ASCII
    if (ch >= '0' && ch <= '9') {
        return 1;  // Retoorna verdadeiro se é um dígito
    } else {
        return 0;  // Retorna falso se não é um dígito
    }
}

void calculate(int number, char option) {
    // Se as opções forem '1', '2' ou '3'
    if (isdigit(option)) {
        int int_option = option - '0';  // Converte o caracter(char) '1' para inteiro(int) 1, '2' para 2 e '3' para 3
        
        if (int_option == 1) {
            printf("The double of %d is %d\n", number, number * 2);
        } else if (int_option == 2) {
            printf("The square of %d is %d\n", number, number * number);
        } else if (int_option == 3) {
            printf("The cube of %d is %d\n", number, number * number * number);
        } else {
            printf("Invalid option. Please select 1, 2, or 3.\n");
        }
    } 
    // Se as opções forem 'a', 'b' ou 'c'
    else if (option == 'a') {
        printf("The double of %d is %d\n", number, number * 2);
    } else if (option == 'b') {
        printf("The square of %d is %d\n", number, number * number);
    } else if (option == 'c') {
        printf("The cube of %d is %d\n", number, number * number * number);
    } else {
        printf("Invalid option. Please select 'a', 'b', or 'c'.\n");
    }
}

int main() {
    int number;
    char option;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Choose an option:\n");
    printf("1/a - Double\n");
    printf("2/b - Square\n");
    printf("3/c - Cube\n");
    printf("Enter your option: ");
    
    scanf(" %c", &option);

    printf("Result:\n");
    calculate(number, option);

    return 0;
}
