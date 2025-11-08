#include <stdio.h>

int main() {
    int no_row, c = 1, blk, i, j;

    printf("Input number of rows: ");
    scanf("%d", &no_row);

    // Outer loop for rows
    for (i = 0; i < no_row; i++) {
        // Print spaces for alignment
        for (blk = 1; blk <= no_row - i; blk++)
            printf(" ");

        // Print values in the row
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;

            printf("%4d", c);
        }

        printf("\n");
    }

    return 0;
}
