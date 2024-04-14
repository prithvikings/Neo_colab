/*Problem statement

Ginny, an inquisitive mind fascinated by the intricacies of arrays, has posed a challenge for you. She needs a program that can identify and display the unique elements present in an array.

Write a program that includes a function named findUniqueElements where the array is passed as an argument.

Input format :

The first line of input is an integer value 'N', representing the size of the array.

The second line of input consists of N space-separated integers arr[i], representing the elements of the array.

Output format :

The output displays the integers, representing the unique elements identified within the array, separated by spaces.

Refer to the sample output for the formatting specifications.

Code constraints :

In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 15

1 ≤ arr[i] ≤ 100

Sample test cases :
Input 1 :
7
3 1 5 2 5 4 3

Output 1 :
1 2 4

Input 2 :
15
5 2 7 1 4 9 8 6 3 2 5 10 7 12 100

Output 2 :
1 4 9 8 6 3 10 12 100

Input 3 :
2
3 4
Output 3 :
3 4*/

#include <stdio.h>

// Function to find unique elements in an array
void findUniqueElements(int n, int arr[]) {
    int unique[101] = {0}; // Array to track occurrence of each element

    // Mark occurrences of elements in the array
    for (int i = 0; i < n; i++) {
        unique[arr[i]]++;
    }

    // Print unique elements
    for (int i = 0; i < n; i++) {
        if (unique[arr[i]] == 1) {
            printf("%d ", arr[i]);
            unique[arr[i]] = 0; // Mark the element as printed
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display unique elements
    findUniqueElements(n, arr);
    printf("\n");

    return 0;
}
