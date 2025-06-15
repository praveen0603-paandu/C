#include <stdio.h>

int main() {
    int m, n;

    // Input two numbers
    printf("Enter first number (m): ");
    scanf("%d", &m);

    printf("Enter second number (n): ");
    scanf("%d", &n);

    // Compare and find maximum
    if (m > n) {
        printf("Maximum is: %d\n", m);
    } else {
        printf("Maximum is: %d\n", n);
    }

    return 0;
}
