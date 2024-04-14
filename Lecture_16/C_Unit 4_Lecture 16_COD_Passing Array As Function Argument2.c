/*Problem statement

Theo, an aspiring mathematician, has presented you with a challenge. He wants you to create a program that calculates the absolute difference between the sum of two arrays.

Create a program to find the absolute difference between two arrays with a function named calculateArraySum and calculateAbsoluteDifference where the array is passed as an argument.

Input

10

-100 -49 -87 5 6 7 0 100 37 57

10

-100 -75 -48 -86 -98 98 97 98 67 100

Output

77

Explanation

Two arrays with 10 elements each are given as input.
The first array has elements: -100, -49, -87, 5, 6, 7, 0, 100, 37, 57, and the sum of the first array is - 24.
The second array has elements: -100, -75, -48, -86, -98, 98, 97, 98, 67, 100, and the sum of the second array is 53.
The absolute difference of the sum is calculated by subtracting the second array from first array |-24 - 53| = 77, and the result is printed.
Input format :

The first line of input is an integer value 'N1', representing the number of elements in the first array.

The second line of input consists of N1 space-separated integers arr1[i], representing the elements of the first array.

The third line of input is an integer value 'N2', representing the number of elements in the second array.

The fourth line of input consists of N2 space-separated integers arr2[i], representing the elements of the second array.

Output format :

The output displays a single integer the absolute difference between the sums of the elements in the two arrays.

Sample test cases :
Input 1 :
3
5 8 3
3
2 6 4

Output 1 :
4

Input 2 :
6
-2 5 0 8 -1 3
6
4 -3 2 7 1 6

Output 2 :
4

Input 3 :
10
-100 -49 -87 5 6 7 0 100 37 57
10
-100 -75 -48 -86 -98 98 97 98 67 100

Output 3 :
77
*/

#include <stdio.h>
#include <stdlib.h> // For abs function

// Function to calculate sum of an array
int calculateArraySum(int n, int arr[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate absolute difference between sum of two arrays
int calculateAbsoluteDifference(int n1, int arr1[], int n2, int arr2[]) {
    // Calculate sum of arrays
    int sum1 = calculateArraySum(n1, arr1);
    int sum2 = calculateArraySum(n2, arr2);

    // Calculate absolute difference
    int absoluteDiff = abs(sum1 - sum2);
    return absoluteDiff;
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Calculate and print the absolute difference
    int absoluteDiff = calculateAbsoluteDifference(n1, arr1, n2, arr2);
    printf("%d\n", absoluteDiff);

    return 0;
}
