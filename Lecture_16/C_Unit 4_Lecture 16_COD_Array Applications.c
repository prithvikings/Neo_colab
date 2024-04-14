/*Problem Statement

Given an integer array, write a program to determine whether the elements of the array are consecutive or not. The program should input the size of the array and its elements. Output whether the array elements form a consecutive sequence or not.

A consecutive sequence implies that the elements follow each other in order without any gaps.

Note: This is a question asked in an Infosys coding test.

Input format :

The first line of input consists of an integer N, representing the size of the array.

The second line consists of N space-separated integers, representing the array elements.

Output format :

If the elements form a consecutive sequence, print "Array elements are consecutive."

Otherwise, print "Array elements are not consecutive."
Sample test cases :
Input 1 :
5
1 3 4 5 2
Output 1 :
Array elements are consecutive.
Input 2 :
3
12 15 13
Output 2 :
Array elements are not consecutive.
Input 3 :
6
5 4 7 8 9 6
Output 3 :
Array elements are consecutive.*/

#include <stdio.h>
#include <stdlib.h>

// Function to compare integers (used in qsort)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array
    qsort(array, N, sizeof(int), compare);

    // Check if the elements form a consecutive sequence
    int consecutive = 1;
    for (int i = 1; i < N; i++) {
        if (array[i] != array[i - 1] + 1) {
            consecutive = 0;
            break;
        }
    }

    // Output the result
    if (consecutive) {
        printf("Array elements are consecutive.\n");
    } else {
        printf("Array elements are not consecutive.\n");
    }

    return 0;
}
