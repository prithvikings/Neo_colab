/*Problem Statement

Alex wants to create a program to search a target value in a sorted array. 

The program should input the array size and elements, as well as the target value. Utilizing binary search, it should determine if the target is present, and if so, provide the index. If not, display a message indicating its absence.

Assist Alex in completing the program efficiently.

Input format : The first line of input consists of an integer N, representing the size of the sorted array.

The second line consists of N space-separated integers, the elements of the sorted array in ascending order.

The third line consists of an integer target, the value to search for in the array. 

Output format : If the target is present in the array, print "The target value X is present at index Y", where X is the target element and Y is the index position (index starts from 0).

If the target is not present, print "The target value X is not present in the array", where X is the target element.

Input 1 :
5
14 29 37 48 59
48 

Output 1 :
The target value 48 is present at index 3 

Input 2 :
10
125 137 248 358 489 587 652 741 823 912
850

Output 2 :
The target value 850 is not present in the array*/

#include <stdio.h>
int search(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int N;
 
    scanf("%d", &N);
    
    int sortedArray[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &sortedArray[i]);
    }
    
    int target;
   
    scanf("%d", &target);
    
    int index = search(sortedArray, N, target);
    if (index != -1) {
        printf("The target value %d is present at index %d\n", target, index);
    } else {
        printf("The target value %d is not present in the array\n", target);