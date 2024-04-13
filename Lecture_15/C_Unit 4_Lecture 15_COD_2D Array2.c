/*Problem Statement

Ben is studying matrices and wants to write a program that swaps two rows of a matrix (N, M), the program takes an input matrix, swaps the specified rows, and then displays the modified matrix.

Assist him with the program.

Input format :

The first line consists of two space-separated integers N and M, representing the number of rows and columns in the matrix.

The next N lines contain M space-separated integers each, representing the elements of the matrix.

The last line consists of two space-separated integers r1 and r2, representing the row numbers to be interchanged.

Output format :

If the input row numbers r1 or r2 are invalid (less than 1 or greater than the number of rows), the output prints "Invalid row numbers".

Otherwise, the modified matrix is printed after swapping the specified rows.

Sample test cases :
Input 1 :
3 3
11 12 13
42 53 67
75 87 99
2 1
Output 1 :
42 53 67 
11 12 13 
75 87 99 

Input 2 :
4 3
1 4 6
2 3 5
6 4 2
8 9 2
2 5
Output 2 :
Invalid row numbers
Input 3 :
9 10
79 8 52 69 70 5 61 62 68 77
56 43 18 89 3 12 66 35 91 47
76 27 28 14 59 98 92 6 13 30
96 73 65 17 58 72 24 90 64 82
81 60 55 4 42 78 26 63 21 97
93 40 54 83 94 1 100 25 99 2
37 16 84 49 23 57 75 34 67 41
32 46 50 88 31 53 86 48 95 38
9 11 33 7 22 44 15 51 45 80
3 5
Output 3 :
79 8 52 69 70 5 61 62 68 77 
56 43 18 89 3 12 66 35 91 47 
81 60 55 4 42 78 26 63 21 97 
96 73 65 17 58 72 24 90 64 82 
76 27 28 14 59 98 92 6 13 30 
93 40 54 83 94 1 100 25 99 2 
37 16 84 49 23 57 75 34 67 41 
32 46 50 88 31 53 86 48 95 38 
9 11 33 7 22 44 15 51 45 80 

Input 4 :
2 3
1 4 5
5 6 8
2 1
Output 4 :
5 6 8 
1 4 5 
*/

#include <stdio.h>

int main() {
    // Input the dimensions of the matrix
    int N, M;
    scanf("%d %d", &N, &M);
    
    // Declare a 2D array to store the matrix
    int matrix[N][M];
    
    // Input the elements of the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Input the row numbers to be swapped
    int r1, r2;
    scanf("%d %d", &r1, &r2);
    
    // Check if row numbers are valid
    if (r1 < 1 || r1 > N || r2 < 1 || r2 > N) {
        printf("Invalid row numbers\n");
        return 0;
    }
    
    // Swap rows r1 and r2
    int temp;
    for (int j = 0; j < M; j++) {
        temp = matrix[r1 - 1][j];
        matrix[r1 - 1][j] = matrix[r2 - 1][j];
        matrix[r2 - 1][j] = temp;
    }
    
    // Output the modified matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", matrix[i][j]);
            if (j < M - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
