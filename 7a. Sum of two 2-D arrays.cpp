// 7a. Sum of two 2-D arrays
#include <stdio.h> 
int main() 
{ 
    int a[100][100], b[100][100], result[100][100], r, c; 
    printf("Enter the number of row="); 
    scanf("%d", &r); 
    printf("Enter the number of column="); 
    scanf("%d", &c); 

    // Taking input using nested for loop 
    printf("Enter elements of 1st matrix\n"); 
    for (int i = 0; i < r; i++) { 
        for (int j = 0; j < c; j++) { 
            scanf("%d", &a[i][j]); 
        } 
    } 

    printf("Enter elements of 2nd matrix\n"); 
    for (int i = 0; i < r; i++) { 
        for (int j = 0; j < c; j++) { 
            scanf("%d", &b[i][j]); 
        } 
    } 

    // Adding corresponding elements of two matrices 
    for (int i = 0; i < r; i++) 
        for (int j = 0; j < c; j++) { 
            result[i][j] = a[i][j] + b[i][j]; 
        } 

    // Displaying the sum 
    printf("Sum Of Matrix:\n"); 
    for (int i = 0; i < r; ++i) { 
        for (int j = 0; j < c; ++j) { 
            printf("%d\t", result[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
} 

