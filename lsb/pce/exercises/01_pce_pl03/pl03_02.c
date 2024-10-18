#include <stdio.h>

void countdown() {
    for (int i = 100; i >= 0; i -= 10)
        printf("%d ", i);
    printf("Acabou!\n");
}

int main() {

    countdown();

    return 0;
}
