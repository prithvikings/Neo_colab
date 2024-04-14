/*Problem Statement

Kumar wants to design a program to analyze race timing data using the bubble sort algorithm.

Write a program to help Kumar find and display the second-fastest race time in seconds from a given list of race times.

Input format :

The first line of input consists of an integer N, representing the number of race times.

The second line consists of N space-separated integers, representing the individual race times in seconds.

Output format :

If N is less than 2, print "Insufficient data to find the second-fastest time."

Otherwise, print the value of the second-fastest race time, in seconds.
Sample test cases :
Input 1 :
5
34 21 56 12 94
Output 1 :
21 seconds
Input 2 :
6
115 124 234 345 159 360
Output 2 :
124 seconds
Input 3 :
1
298
Output 3 :
Insufficient data to find the second-fastest time.*/

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int n, i, j;
  int times[10]; // Array to store race times (limited to 10 races)

  // Input number of races

  scanf("%d", &n);

  // Check for insufficient data
  if (n < 2) {
    printf("Insufficient data to find the second-fastest time.\n");
    return 0;
  }

  // Input race times

  for (i = 0; i < n; i++) {
    scanf("%d", &times[i]);
  }

  // Sort race times using bubble sort (ascending order)
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (times[j] > times[j + 1]) {
        swap(&times[j], &times[j + 1]);
      }
    }
  }

  // Print second-fastest time (assuming n >= 2)
  printf("%d seconds\n", times[1]);

  return 0;
}