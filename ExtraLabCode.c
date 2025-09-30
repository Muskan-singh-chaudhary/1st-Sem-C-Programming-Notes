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
