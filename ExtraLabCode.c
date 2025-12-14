1. Write a program that prints the size (in bytes) of int, float, char, double, and long long using sizeof operator.
ANS: 
#include <stdio.h>
int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    return 0;
}

2. Given two integers, divide them and print the result in float (type conversion).
Example:
Input: 5 2 → Output: 2.5

ANS: 
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    float result = (float)a / b;   // type casting
    printf("%.2f\n", result);
    return 0;
}

3. Create a program where a global variable and a local variable have the same name. Print their values inside and outside the function to show the difference.
ANS: 
#include <stdio.h>

int num = 100; // global variable

void test() {
    int num = 50;  // local variable with same name
    printf("Inside function, local num = %d\n", num);
}

int main() {
    printf("Outside function, global num = %d\n", num);
    test();
    printf("Outside again, global num = %d\n", num);
    return 0;
}

4. Write a small C snippet with int, if, while, return. Ask students: Which words are keywords? Which are identifiers?
ANS: 
#include <stdio.h>
int main() {
    int x = 5;
    if (x > 0) {
        while (x > 0) {
            x--;
        }
    }
    return 0;
}

5. Write a program that takes a character as input and prints its ASCII value.
ANS: 
#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    printf("ASCII value of %c = %d\n", c, c);
    return 0;
}

6. Write a program that finds the sum of digits of a number using a while loop.
ANS: 
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}

7. Write a program to search a given number in an array.
ANS: 
#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found) printf("Element found at index %d\n", i);
    else printf("Element not found\n");
    return 0;
}

8. Write a program to copy all elements of one array into another.
ANS: 
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (i = 0; i < n; i++) scanf("%d", &arr1[i]);
    for (i = 0; i < n; i++) arr2[i] = arr1[i];
    printf("Copied array: ");
    for (i = 0; i < n; i++) printf("%d ", arr2[i]);
    return 0;
}

9. Write a program to find the element that appears most frequently in the array.
ANS: 
#include <stdio.h>
int main() {
    int n, i, j, maxCount = 0, mostFreq;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }
    printf("Most frequent element: %d\n", mostFreq);
    return 0;
}

10. Write a program to find common elements between two arrays.
ANS: 
#include <stdio.h>
int main() {
    int n1, n2, i, j;
    scanf("%d", &n1);
    int arr1[n1];
    for (i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    scanf("%d", &n2);
    int arr2[n2];
    for (i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    printf("Common elements: ");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    return 0;
}

11. 
    #include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Series: 1");
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
        if (i > 1) {
            printf(" + 1/%d", i);
        }
    }
    
    printf("\nSum of the series = %.6f\n", sum);
    
    return 0;
}

12. 
    #include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int sign = 1;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        sum += sign * (1.0 / i);
        
        if (i == 1) {
            printf("1");
        } else {
            if (sign == 1) {
                printf(" + 1/%d", i);
            } else {
                printf(" - 1/%d", i);
            }
        }
        
        sign = -sign;  
    }
    
    printf("\nSum of the series = %.6f\n", sum);
    
    return 0;
}

13. 
    #include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    long long sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        long long fact = factorial(i);
        sum += fact;
        
        if (i == 1) {
            printf("%d!", i);
        } else {
            printf(" + %d!", i);
        }
    }
    
    printf("\nSum of the series = %lld\n", sum);
    
    printf("\nFactorial values:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d! = %lld\n", i, factorial(i));
    }
    
    return 0;
}

14. 
    #include <stdio.h>
#include <math.h>

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}


double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int n;
    double x, sum = 0.0;
    
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    printf("Series: 1");
    sum = 1.0;  
    
    for (int i = 1; i <= n; i++) {
        double term = power(x, i) / factorial(i);
        sum += term;
        
        printf(" + x^%d/%d!", i, i);
    }
    
    printf("\nWhere x = %.2f\n", x);
    printf("Sum of the series = %.6f\n", sum);
    printf("For comparison, e^%.2f = %.6f\n", x, exp(x));
    
    return 0;
}

15. 
    #include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;
    float x;
    double sum = 1;

    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);

    for(int i = 1; i <= n; i++)
        sum += pow(x, i) / factorial(i);

    printf("Series sum = %.4lf", sum);
    return 0;
}

16. 
    #include <stdio.h>
#include <math.h>

int maxProduct(int* nums, int numsSize) {
    int maxProd = nums[0];
    int minProd = nums[0];
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        int temp = maxProd;

        maxProd = fmax(fmax(nums[i], nums[i] * maxProd),
                        nums[i] * minProd);
        minProd = fmin(fmin(nums[i], nums[i] * temp),
                        nums[i] * minProd);

        if (maxProd > result)
            result = maxProd;
    }
    return result;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxProduct(arr, size);
    printf("Max Product = %d\n", result);

    return 0;
}

17. 
    #include <stdio.h>

#define N 3

void rotateMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0, k = N - 1; j < k; j++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
        }
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateMatrix(matrix);

    printf("Rotated Matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

18. 
    #include <stdio.h>

int main() {
    int n;
    printf("Enter size of matrix (n): ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);


    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n/2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
    }

    printf("Rotated Matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

19. 
    #include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if ((i == 0 && str[i] != ' ') ||
            (str[i] != ' ' && str[i - 1] == ' ')) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Number of words = %d\n", countWords(str));

    return 0;
}

20. 
    #include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left[n], right[n], result[n];

    left[0] = 1;
    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] * arr[i - 1];
    }

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < n; i++) {
        result[i] = left[i] * right[i];
    }

    printf("Output: [");
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}

