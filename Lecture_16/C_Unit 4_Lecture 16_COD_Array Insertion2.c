/*Problem Statement:

Thiru is working on a grading system for his class of students. He needs a program that takes input for student scores, inserts a new score at the beginning and end of the existing scores, and then displays the modified list of scores.

Write a program to help Thiru achieve this.

Input format :

The first line of input is an integer, the value n, indicating the number of elements in the array.

The second line of input consists of n space-separated integers, representing the elements of the array arr[i].

The third line of input consists of two integers M and P, representing the value to be inserted at the beginning and ending of the array, separated by a space.

Output format :

The output is a single line containing n + 2 space-separated integers, which represent the modified array after inserting the element at the beginning and ending of the existing scores.

Sample test cases :
Input 1 :
5
3 4 5 6 7
2 8
Output 1 :
2 3 4 5 6 7 8
Input 2 :
1
45
90 78
Output 2 :
90 45 78
Input 3 :
10
98 37 48 28 16 18 20 100 25 13
1 19
Output 3 :
1 98 37 48 28 16 18 20 100 25 13 19*/

#include <stdio.h>

int main() {
    int n, M, P;
    scanf("%d", &n);

    // Array to store student scores
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &M, &P);

    // Output modified array after inserting elements at the beginning and end
    printf("%d ", M); // Insert element M at the beginning
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", P); // Insert element P at the end

    return 0;
}
