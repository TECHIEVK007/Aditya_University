// 7e. Lower Triangular Matrix
#include <stdio.h> 
int main() 
{ 
    int i, j; 
    int Max_Row, Max_Column; 

    printf("Enter the Number of Rows: "); 
    scanf("%d", &Max_Row); 
    printf("Enter the Number of Columns: "); 
    scanf("%d", &Max_Column);  
    int M[Max_Row][Max_Column]; 

    printf("Enter the Elements in the Matrix: \n"); 
    for (i = 0; i < Max_Row; i++) { 
        for (j = 0; j < Max_Column; j++) { 
            scanf("%d", &M[i][j]); 
        } 
    } 

    // Lower Triangular Matrix Logic 
    for (i = 0; i < Max_Row; i++) { 
        for (j = 0; j < Max_Column; j++) { 
            if (i < j) { 
                M[i][j] = 0; 
            } 
        } 
    } 

    printf("The Lower Triangular Matrix is: \n"); 
    for (i = 0; i < Max_Row; i++) { 
        for (j = 0; j < Max_Column; j++) { 
            printf("%d ", M[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
} 

