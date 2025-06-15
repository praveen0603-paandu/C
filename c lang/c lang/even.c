#include <stdio.h>

int main() {
    int m;

    // Input
    printf("Enter a number: ");
    scanf("%d", &m);

    // Check if the number is even
    if (m % 2 == 0) {
        printf("%d is even.\n", m);
    }

    return 0;
}
