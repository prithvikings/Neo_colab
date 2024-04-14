/*
Problem Statement

Tom is working in a warehouse inventory system, where the item IDs are assigned sequentially in ascending order.

He wants to develop a program using binary search to efficiently determine the closest item ID that is less than or equal to a given target ID. The program takes the total number of items and their sorted IDs as input, assisting warehouse staff in quickly identifying the closest available item less than or equal to the target ID.

Help Tom in this program.

Input format :

The first line of input consists of an integer N, representing the number of items in the warehouse.

The second line consists of N space-separated integers, representing the sorted list of item IDs.

The third line consists of an integer representing the target item ID.

Output format :

The output prints "The closest item ID less than or equal to X is Y.", where X is the target ID and Y is the closest item ID less than or equal to X.

If no such element exists, print "No closest item with an ID less than or equal to X exists in the warehouse.", where X is the target ID.

Sample test cases :
Input 1 :
7
17 25 38 47 51 62 79
50
Output 1 :
The closest item ID less than or equal to 50 is 47.
Input 2 :
6
41 52 58 61 65 72
65
Output 2 :
The closest item ID less than or equal to 65 is 65.
Input 3 :
5
12 15 24 25 35
10
Output 3 :
No closest item with an ID less than or equal to 10 exists in the warehouse.*/

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
  if (low > high) {
    return -1; // No item found (target less than all elements)
  }

  int mid = low + (high - low) / 2;

  if (arr[mid] == target) {
    return arr[mid]; // Found the exact target ID
  } else if (arr[mid] < target) {
    // Search in the right half (considering closest less than or equal)
    int rightResult = binarySearch(arr, mid + 1, high, target);
    // If right half doesn't have a closer item, return current element
    return (rightResult == -1) ? arr[mid] : rightResult;
  } else {
    // Search in the left half
    return binarySearch(arr, low, mid - 1, target);
  }
}

int main() {
  int N, target, i;

  // Input number of items

  scanf("%d", &N);

  // Input sorted item IDs
  int itemIDs[N];

  for (i = 0; i < N; i++) {
    scanf("%d", &itemIDs[i]);
  }

  // Input target item ID

  scanf("%d", &target);

  int closestID = binarySearch(itemIDs, 0, N - 1, target);

  if (closestID == -1) {
    printf("No closest item with an ID less than or equal to %d exists in the warehouse.\n", target);
  } else {
    printf("The closest item ID less than or equal to %d is %d.\n", target, closestID);
  }

  return 0;
}// You are using GCC
