#include <stdio.h>

void main() {
    int n, i, line;
    printf("Enter how many lines of Pascal's triangle you want to print: ");
    scanf("%d", &n);

    for (line = 0; line < n; line++) {
        for (i = 0; i < n - line - 1; i++) {
            printf("  ");
        }
        int coef = 1; 
        for (i = 0; i <= line; i++) {
            printf("%4d", coef);
            coef = coef * (line - i) / (i + 1); 
        }
        printf("\n"); 
    }
}

