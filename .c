1. Lower triangular matrix 
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe given matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Lower Triangular Matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i < j)
                printf("0 ");  
            else
                printf("%d ", a[i][j]);   
        }
        printf("\n");
    }

    return 0;
}

2. 
    #include <stdio.h>

int main() {
    int n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n; 
    }
    while (n > 0) {
        
        if (n & 1) {
            count++; 
        }
        
        n >>= 1;
    }
    printf("Number of 1s in the binary representation: %d\n", count);

    return 0;
}
