/*Problem Statement

Tim is creating a program to track and analyze student attendance. The program requires two inputs: the total number of students (n) and the total number of class sessions (m). The task is to design and populate an attendance matrix, 'matrix', representing the attendance record of each student for each session.

The program's specific objective is to determine whether the last student on the list attended an even or odd number of classes. This functionality will aid teachers in quickly evaluating the attendance habits of individual students.

Input format :

The first line of input consists of a positive integer n, representing the number of students.

The second line of input consists of a positive integer m, representing the number of class sessions.

The next n lines consist of m space-separated positive integers representing the number of classes attended by the student.

Output format :

The output displays one of the following results:

If the last session is even the output prints "[LastSession] is even".

If the last session is odd the output prints "[LastSession] is odd".

Sample test cases :
Input 1 :
2
2
1 2
3 100

Output 1 :
100 is even

Input 2 :
5
3
10 2 3
4 5 6
7 8 9
10 11 12
1 2 3

Output 2 :
3 is odd */

#include <stdio.h>

int main() {
    // Input the number of students and class sessions
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Declare and populate the attendance matrix
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Check if the last session's attendance is even or odd
    int last_session_attendance = matrix[n - 1][m - 1];
    if (last_session_attendance % 2 == 0) {
        printf("%d is even", last_session_attendance);
    } else {
        printf("%d is odd", last_session_attendance);
    }
    
    return 0;
}
