/*Problem Statement

Arve is learning about matrices and wants to write a program to find the sum of diagonal elements in a matrix using a 2D array.




The program takes an input matrix, calculates the sum of its diagonal elements, and then displays the matrix along with the computed sum.

Input format :

The first line of input consists of two space-separated integers m and n, representing the number of rows and columns in the matrix respectively.

The next m lines of input consist of n space-separated integers each, representing the elements of the matrix.

Output format :

The first line prints "Matrix:" line and the next m lines consist of n elements representing the input matrix.

The following line prints "Sum of diagonal elements = " followed by an integer representing the sum of diagonal elements.

m == n i.e. only square matrices should be used.

Sample test cases :
Input 1 :
2 2
1 2
5 6
Output 1 :
Matrix:
1 2 
5 6 
Sum of diagonal elements = 7

Input 2 :
5 5
1 2 3 4 7
5 6 1 2 3
1 2 3 5 6
9 8 7 6 5
3 4 5 6 7
Output 2 :
Matrix:
1 2 3 4 7 
5 6 1 2 3 
1 2 3 5 6 
9 8 7 6 5 
3 4 5 6 7 
Sum of diagonal elements = 23

Input 3 :
3 3
100 200 300
550 670 890
990 1000 234
Output 3 :
Matrix:
100 200 300 
550 670 890 
990 1000 234 
Sum of diagonal elements = 1004*/


#include <stdio.h>

int main() {
    // Input the dimensions of the matrix
    int m, n;
    scanf("%d %d", &m, &n);
    
    // Ensure the matrix is square
    if (m != n) {
        printf("Error: Only square matrices are allowed.\n");
        return 1;
    }
    
    // Declare a 2D array to store the matrix
    int matrix[m][n];
    
    // Input the elements of the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Compute the sum of diagonal elements
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += matrix[i][i];
    }
    
    // Output the matrix
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Output the sum of diagonal elements
    printf("Sum of diagonal elements = %d\n", sum);
    
    return 0;
}
