/*Problem Statement

Akil is attending a special event and has a unique ticket that allows him to move to the front of the line. To make use of this privilege, Akil decides to insert himself at the beginning of the line.

Write a program that helps Akil achieve this using the array insertion concept.

Input format :

The first line of input is an integer N representing the current size of the line.

The second line of input consists of N space-separated integers Positions[i], representing the current positions of the people in the line.

The third line of input is an integer M representing Akil's unique ticket number.

Output format :

The output displays a single line containing N+1 space-separated integers representing the updated positions in the line after Akil inserts himself at the front.

Sample test cases :
Input 1 :
2
1 5
6
Output 1 :
6 1 5
Input 2 :
5
45 67 34 21 12
89
Output 2 :
89 45 67 34 21 12
Input 3 :
10
1 4 5 6 7 98 76 56 89 100
90
Output 3 :
90 1 4 5 6 7 98 76 56 89 100 */

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);

    // Array to store current positions in the line
    int Positions[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &Positions[i]);
    }

    scanf("%d", &M);

    // Shift elements in the array to make room for Akil
    for (int i = N - 1; i >= 0; i--) {
        Positions[i + 1] = Positions[i];
    }

    // Insert Akil at the front of the line
    Positions[0] = M;
    N++; // Update the size of the line

    // Output updated positions in the line
    for (int i = 0; i < N; i++) {
        printf("%d ", Positions[i]);
    }
    printf("\n");

    return 0;
}
