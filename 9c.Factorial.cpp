#include <stdio.h>

long int fact(long int n) {
    if ((n < 0) || (n > 15))
        return 0;
    else if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    long int n;
    scanf("%ld", &n);
    long int res = fact(n);
    printf("%ld", res);
    return 0;
}


