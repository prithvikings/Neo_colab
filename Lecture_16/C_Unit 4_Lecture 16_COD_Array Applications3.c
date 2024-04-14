/*Problem statement

Ram wants to create a program to determine if a square matrix is symmetric, meaning it is equal to its transpose.

The program should take a square matrix as input and output whether it is symmetric or not. Assist Ram in solving this problem.

Input format :

The first line of input is an integer N, representing the size of the square matrix.

The next N lines input consists of N space-separated integers each, representing the elements of the matrix.

Output format :

If the matrix is symmetric, output "The matrix is symmetric.".

If the matrix is not symmetric, output "The matrix is not symmetric.".
Sample test cases :
Input 1 :
3
1 2 3
2 4 5
3 5 6
Output 1 :
The matrix is symmetric.
Input 2 :
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 100
Output 2 :
The matrix is not symmetric.*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Declare a 2D array to store the matrix
    int matrix[N][N];

    // Input the elements of the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    int symmetric = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) {
            break;
        }
    }

    // Output the result
    if (symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
