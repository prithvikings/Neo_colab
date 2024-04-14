/*Problem Statement

You are given an array of integers, and your task is to write a program to find and print the maximum difference j - i such that arr[j] > arr[i]. Input the size of the array N and its elements. Output the calculated maximum difference.

Examples

Input: {1, 2, 3, 4, 5, 6}

Output: 5  (j = 5, i = 0)

Input: {34, 8, 10, 3, 2, 80, 30, 33, 1}

Output: 6  (j = 7, i = 1)

Note: This is a question asked in Amazon and Snapdeal coding tests.

Input format :

The first line of input consists of an integer N, representing the size of the array.

The second line consists of N space-separated integers, representing the array elements.

Output format :

The output prints an integer representing the maximum difference j - i such that arr[j] > arr[i].

If there is no maximum difference, print -1.

Sample test cases :
Input 1 :
6
1 2 3 4 5 6
Output 1 :
5
Input 2 :
9
34 8 10 3 2 80 30 33 1
Output 2 :
6
Input 3 :
6
6 5 4 3 2 1
Output 3 :
-1*/

#include <stdio.h>

// Function to find the maximum difference j - i such that arr[j] > arr[i]
int maxIndexDiff(int arr[], int n) {
    int maxDiff = -1;

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (arr[j] > arr[i] && (j - i) > maxDiff) {
                maxDiff = j - i;
            }
        }
    }

    return maxDiff;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxDiff = maxIndexDiff(arr, N);

    printf("%d\n", maxDiff);

    return 0;
}
