/*Problem Statement

Hemanth is focused on creating a program to organize a list of employees based on their employee IDs.

Assist him in implementing a function to sort the employee IDs using the bubble sort algorithm. The sorting should prioritize even-numbered employee IDs first, followed by odd-numbered employee IDs.

Display the sorted list of employee IDs according to the specified condition.

Input format :

The first line of input consists of an integer N, representing the total number of employees.

The second line consists of N space-separated integers, representing the employee ID.

Output format :

The output prints the even-numbered employee IDs first, followed by odd-numbered employee IDs.

Sample test cases :
Input 1 :
6
71 64 87 99 65 75
Output 1 :
64 71 87 99 65 75
Input 2 :
7
71 78 79 87 81 70 74
Output 2 :
78 70 74 71 79 87 81*/

#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((arr[j] % 2 == 1) && (arr[j + 1] % 2 == 0)) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    
    int empIDs[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &empIDs[i]);
    }
    bubbleSort(empIDs, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", empIDs[i]);
    }
        return0;
}