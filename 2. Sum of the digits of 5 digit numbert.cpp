#include <stdio.h>

int main() {
    int num;
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    int sum = 0;
    while (num != 0) {
        sum += num % 10;  // Add the last digit to sum
        num = num / 10;   // Remove the last digit
    }

    printf("Digit sum: %d", sum);
    return 0;
}
