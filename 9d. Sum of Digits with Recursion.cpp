#include <stdio.h>

int sumOfDigits(int num);
int calculateResult(int n, int k);
int Calres2(int num);

int sumOfDigits(int num) {
    if (num == 0) {
        return 0;
    }
    if (num < 0) {
        num = -num;
    }
    return (num % 10) + sumOfDigits(num / 10);
}

int calculateResult(int n, int k) {
    if (n == 0) {
        return 0;
    }
    int sum = sumOfDigits(n);
    int c = sum * k;
    return c;
}

int Calres2(int num) {
    while (num > 0) {
        int r2 = sumOfDigits(num);
        return sumOfDigits(r2);
    }
    // If num <= 0, just return 0 (to avoid missing return)
    return 0;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);

    int result = calculateResult(n, k);
    printf("%d\n", result);

    int r1 = Calres2(result);
    printf("%d", r1);

    return 0;
}

