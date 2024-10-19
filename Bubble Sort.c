#include <stdio.h>
#include <stdlib.h>

void printArray(int* B, int o) {
    for (int i = 0; i < o; i++) {
        printf("%d ", B[i]);
    }
}

int main() {
    printf("Welcome! This is a program to sort an integer array provided by the user in ascending order.(Using Bubble Sort)\n");
    
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *A;
    A = (int *)malloc(n * (sizeof(int)));

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    printArray(A, n);

    int j, temp;
    for (i = 0; i < n-1; i++) {
    
        for (j = 0; j <= (n - (1 + i)); j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}