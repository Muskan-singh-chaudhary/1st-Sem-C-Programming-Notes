Number Patterns 

1) Increasing Numbers

#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

2) Pyramid Style Numbers

#include <stdio.h>

int main() {
    int rows = 6;
    for (int i = 1; i <= rows; i++) {
        
        for (int s = 1; s <= rows - i; s++) {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}


3) Diamond Numbers

#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= i; j++) printf("%d", j);
        for (j = i; j >= 1; j--) printf("%d", j);
        printf("\n");
    }
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("%d", j);
        for (j = i; j >= 1; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}

4) Binary Triangle (10, 1010…)

#include <stdio.h>

int main() {
    int rows = 6;
    for (int i = 1; i <= rows; i++) {
      
        for (int s = 1; s <= rows - i; s++) {
            printf(" ");
        }
       
        for (int j = 1; j <= i; j++) {
            printf("10");
        }
        printf("\n");
    }
    return 0;
}


5) Reverse Numbers (55555, 4444…)

#include <stdio.h>
int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}

🔹 Star Patterns

1) Right Half Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

2) Left Half Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

3) Full Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

4) Inverted Right Half Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

5) Inverted Left Half Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}

6) Inverted Full Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

7) Rhombus Pattern

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++)
            printf(" ");  
        for (j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}


8) Diamond Pattern

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

9) Hourglass Pattern

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

10) Hollow Square Pattern

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

11) Hollow Full Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

12) Hollow Inverted Full Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

13) Hollow Diamond Pyramid

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

14) Hollow Hourglass Pattern

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

15) Floyd’s Triangle

#include <stdio.h>
int main() {
    int i, j, n = 5, num = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

16) Pascal’s Triangle

#include <stdio.h>
int main() {
    int n = 5, coef = 1, i, j, space;
    for (i = 0; i < n; i++) {
        for (space = 1; space <= n - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}


