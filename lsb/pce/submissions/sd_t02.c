#include <stdio.h>

int displayMenu();
int verifyOption(int option);

void withdrawal(double *ptr_balance);
void deposit(double *ptr_balance);
void displayBalance(double balance);
void payment(double *ptr_balance);

void verifyTransaction(double *ptr_balance, double amount);
int isBalanceEnough(double balance, double amount);

int main() {
    double balance;
    int option;
    balance = 2000;

    do {
        displayMenu();
        printf("Escolha uma opção: ");

        scanf("%d", &option);

        switch (option) {
            case 1:
                withdrawal(&balance);
                break;
            case 2:
                deposit(&balance);
                break;
            case 3:
                displayBalance(balance);
                break;
            case 4:
                payment(&balance);
                break;
            case 5:
                printf("Até à próxima.\n");
                break;
            default:
                printf("Opção inválida. Volte a tentar.\n");
        }

    } while (verifyOption(option) != 0);

    return 0;
}

int displayMenu() {
    printf("1. Levantamento\n");
    printf("2. Depósito\n");
    printf("3. Saldo\n");
    printf("4. Pagamento de Serviços\n");
    printf("5. Sair\n");
    return 1;
}

int verifyOption(int option) {
    if (option > 0 && option < 5)
        return option;
    if (option == 5)
        return 0;
    return -1;
}

void withdrawal(double *ptr_balance) {
    double amount;
    printf("Qual a quantia que pretende levantar: ");
    scanf("%lf", &amount);
    verifyTransaction(ptr_balance, amount);
}

void deposit(double *ptr_balance) {
    double amount;
    printf("Introduza o montante a depositar: ");
    scanf("%lf", &amount);
    *ptr_balance += amount;
    printf("Transação com sucesso.");
    displayBalance(*ptr_balance);
}

void displayBalance(double balance) {
    printf("Conta corrente: %.2lf €\n", balance);
}

void payment(double *ptr_balance) {
    int service;
    double amount;

    do {
        printf("Escolha o serviço:\n");
        printf("1. Água\n");
        printf("2. Eletricidade\n");
        printf("3. Internet\n");
        printf("Digite a sua escolha: ");

        scanf("%d", &service);

        if (service < 1 || service > 3)
            printf("Opção inválida. Escolha 1, 2 ou 3.\n");

    } while (service < 1 || service > 3);


    printf("Digite o montante a pagar: ");
    scanf("%lf", &amount);

    verifyTransaction(ptr_balance, amount);
}

void verifyTransaction(double *ptr_balance, double amount) {
    if (isBalanceEnough(*ptr_balance, amount)) {
        *ptr_balance -= amount;
        printf("Transação com sucesso.");
        displayBalance(*ptr_balance);
    } else {
        printf("Saldo insuficiente.\n");
    }
}

int isBalanceEnough(double balance, double amount) {
    return balance >= amount;
}
