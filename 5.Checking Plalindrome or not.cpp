#include <stdio.h>
#include <math.h>

int main() {
    int originalNumber, reverseNumber = 0, tempNumber, rem;

    printf("Enter a number: ");
    scanf("%d", &originalNumber);

    // Store originalNumber in tempNumber
    tempNumber = originalNumber;

    // Reverse the number
    while (tempNumber != 0) {
        rem = tempNumber % 10;
        reverseNumber = reverseNumber * 10 + rem;
        tempNumber = tempNumber / 10;
    }

    // Check if original and reversed numbers are the same
    if (originalNumber == reverseNumber)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
