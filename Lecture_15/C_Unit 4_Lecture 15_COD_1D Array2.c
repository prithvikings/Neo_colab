/*Problem Statement

Kiran, interested in data patterns, can use this program to analyze sequential variations in an array. The sum of absolute differences between consecutive elements helps detect trends and understand data fluctuations, providing insights into the array's overall structure.

Write a program that takes an array's size and its elements as input, then calculates and displays the sum of absolute differences between consecutive elements in the array.

Example

Input:

5

1 3 9 6 3

Output:

14

Explanation:

The Absolute difference is calculated by:

|1-3| + |3-9| + |9-6| + |6-3| = 2 + 6 + 3 + 3 = 14

Input format :

The first line of input consists of an integer N, representing the size of the array.

The next line consists of N space-separated integers, representing the elements of the array.

Output format :

The output prints a single integer, the sum of absolute differences between consecutive elements in the array.


Sample test cases :
Input 1 :
5
1 3 9 6 3
Output 1 :
14
Input 2 :
3
10 5 2

Output 2 :
8
Input 3 :
10
-100 84 14 26 37 16 8 9 89 100
Output 3 :
398 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Input the size of the array
    int N;
    scanf("%d", &N);
    
    // Allocate memory for the array
    int *arr = (int*)malloc(N * sizeof(int));
    
    // Input array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate the sum of absolute differences between consecutive elements
    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        sum += abs(arr[i] - arr[i + 1]);
    }
    
    // Output the result
    printf("%d", sum);
    
    // Free dynamically allocated memory
    free(arr);
    
    return 0;
}
