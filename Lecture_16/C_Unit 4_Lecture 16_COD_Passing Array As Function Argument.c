/*Single File Programming Question

Problem statement

John, a computer science student, is facing a challenge related to symmetric matrices in his studies. He needs to develop a program to address this issue.

The core of the program is a function named checkSymmetry(i, j, a). This function will accept three parameters: i and j, representing the dimensions of the matrix, and a, which is the matrix itself. The primary task of this function is to determine whether the given matrix a is symmetric or not.

Symmetry Condition:

The given matrix = The transpose of the given matrix

A = AT

Input format :

The first line of input consists of two space-separated integers, n, and m, representing the number of rows and columns in the square matrix.

The second line of input consists of m space-separated integers, representing the elements of the matrix.

Output format :

The output displays the following format:

If the matrix is symmetric, print "It is a Symmetric Matrix".

If the matrix is not symmetric, print "It is not a Symmetric Matrix".

If the matrix is not square."Rows not equal to columns".

Refer to the sample output for the formatting specifications.

Code constraints :

In this scenario, the test cases fall under the following constraints:

1 ≤ rows and cols ≤ 5

0 ≤ arr[i] ≤ 10

Max_Rows and Cols = 100

Sample test cases :
Input 1 :
3 3
1 4 5
4 3 2
5 2 1
Output 1 :
It is a Symmetric Matrix
Input 2 :
4 4
1 2 3 4
2 5 6 7
9 6 7 9
4 7 9 10
Output 2 :
It is not a Symmetric Matrix
Input 3 :
2 3
1 2 3
4 5 6
Output 3 :
Rows not equal to columns*/

#include <iostream>

using namespace std;

// Function to check symmetry of the matrix
void checkSymmetry(int n, int m, int** a) {
    // Check if the matrix is square
    if (n != m) {
        cout << "Rows not equal to columns" << endl;
        return;
    }

    // Check for symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != a[j][i]) {
                cout << "It is not a Symmetric Matrix" << endl;
                return;
            }
        }
    }

    cout << "It is a Symmetric Matrix" << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Allocate memory for the matrix
    int** a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Check symmetry
    checkSymmetry(n, m, a);

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
