#include <stdio.h>

int find_lcm(int, int);

int main() {
    int a, b, lcm;
    printf("\n\nEnter 2 integers to find LCM of:\n");
    scanf("%d%d", &a, &b);
    lcm = find_lcm(a, b);
    printf("\n\n LCM of %d and %d is: %d\n\n", a, b, lcm);
    return 0;
}

int find_lcm(int a, int b) {
    static int temp = 1;

    if (temp % a == 0 && temp % b == 0) {
        int ans = temp;
        // Optional reset so future calls start fresh
        temp = 1;
        return ans;
    } else {
        temp++;
        return find_lcm(a, b);
    }
}

