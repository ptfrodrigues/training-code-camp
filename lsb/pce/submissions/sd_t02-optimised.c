#include <stdio.h>
#include <ncurses.h>

// Function prototypes
void menu(int highlight);
void withdrawal(float *balance);
void deposit(float *balance);
void balanceInquiry(float balance);
void payment(float *balance);
int sufficientBalance(float balance, float amount);

int main() {
    float balance = 1000.0;
    int choice = 0;
    int highlight = 0;
    int ch;

    initscr();  // Initialize ncurses screen
    clear();
    noecho();
    cbreak();  // Disable line buffering
    keypad(stdscr, TRUE);  // Enable function keys, including arrow keys

    while (1) {
        menu(highlight);
        ch = getch();

        switch (ch) {
            case KEY_UP:
                if (highlight > 0)
                    highlight--;
                break;
            case KEY_DOWN:
                if (highlight < 4)
                    highlight++;
                break;
            case 10:  // Enter key
                choice = highlight + 1;
                switch (choice) {
                    case 1:
                        withdrawal(&balance);
                        break;
                    case 2:
                        deposit(&balance);
                        break;
                    case 3:
                        balanceInquiry(balance);
                        break;
                    case 4:
                        payment(&balance);
                        break;
                    case 5:
                        endwin();
                        printf("Exiting the program.\n");
                        return 0;
                }
                break;
            default:
                break;
        }
    }
    
    endwin();  // End ncurses mode
    return 0;
}

void menu(int highlight) {
    char *choices[] = {"Withdrawal", "Deposit", "Balance Inquiry", "Payment of Services", "Exit"};
    int n_choices = sizeof(choices) / sizeof(char *);
    
    clear();
    for (int i = 0; i < n_choices; ++i) {
        if (i == highlight)
            attron(A_REVERSE);  // Highlight the current option
        mvprintw(i, 0, choices[i]);
        attroff(A_REVERSE);
    }
    refresh();
}

void withdrawal(float *balance) {
    float amount;
    echo();
    clear();
    mvprintw(0, 0, "Enter the amount to withdraw: ");
    scanw("%f", &amount);

    if (sufficientBalance(*balance, amount)) {
        *balance -= amount;
        mvprintw(2, 0, "Withdrawal successful. New balance: %.2f", *balance);
    } else {
        mvprintw(2, 0, "Insufficient balance for this transaction.");
    }
    refresh();
    getch();
    noecho();
}

void deposit(float *balance) {
    float amount;
    echo();
    clear();
    mvprintw(0, 0, "Enter the amount to deposit: ");
    scanw("%f", &amount);
    *balance += amount;
    mvprintw(2, 0, "Deposit successful. New balance: %.2f", *balance);
    refresh();
    getch();
    noecho();
}

void balanceInquiry(float balance) {
    clear();
    mvprintw(0, 0, "Your current balance is: %.2f", balance);
    refresh();
    getch();
}

void payment(float *balance) {
    float amount;
    int service;
    echo();
    clear();
    mvprintw(0, 0, "Choose a service to pay:\n");
    mvprintw(1, 0, "1. Water\n2. Electricity\n3. Internet\n");
    mvprintw(4, 0, "Enter your choice: ");
    scanw("%d", &service);
    mvprintw(5, 0, "Enter the amount to pay: ");
    scanw("%f", &amount);

    if (sufficientBalance(*balance, amount)) {
        *balance -= amount;
        mvprintw(7, 0, "Payment successful. New balance: %.2f", *balance);
    } else {
        mvprintw(7, 0, "Insufficient balance for this transaction.");
    }
    refresh();
    getch();
    noecho();
}

int sufficientBalance(float balance, float amount) {
    return balance >= amount;
}
