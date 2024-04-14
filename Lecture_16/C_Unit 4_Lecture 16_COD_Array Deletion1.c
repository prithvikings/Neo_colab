/*Problem Statement:

Teju considers the number 3 unlucky and wishes to remove the element located at the 3rd position in an array, considering the first position in the array as position 1.

Write a program that eliminates the element at this 3rd position and then displays the modified array.

Input format :

The first line of input is an integer 'n', the size of the array.

The second line of input consists of 'n' space-separated integers representing the elements of the array.

Output format :

The output displays space-separated integer array values after removing the element at the 3rd position.

Sample test cases :
Input 1 :
5
263 748 362 187 163
Output 1 :
263 748 187 163
Input 2 :
10
765 899 532 142 376 897 1000 234 162 189
Output 2 :
765 899 142 376 897 1000 234 162 189
Input 3 :
3
1 686 472
Output 3 :
1 686*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the array size is at least 3
    if (n < 3) {
        printf("Array size should be at least 3\n");
        return 0;
    }

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Remove the element at the 3rd position
    for (int i = 2; i < n; i++) {
        array[i] = array[i + 1];
    }

    // Display the modified array
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
