#include <stdio.h>

int main() {
    int digit1, digit2;
    int result;

    // Read the two digits from stdin
    printf("Enter the first digit: ");
    scanf("%d", &digit1);

    printf("Enter the second digit: ");
    scanf("%d", &digit2);

    // Multiply the digits
    result = digit1 * digit2;

    // Print the result
    printf("The result of the multiplication is: %d\n", result);

    return 0;
}
