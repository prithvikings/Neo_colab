/*Problem Statement

Ashok wants to develop a program for a classroom seating arrangement system where students are represented by unique integers.

Implement a function to perform a linear search and swap the positions of two students based on their IDs.

In the main program, input the number of students, their IDs, and the IDs of two students to swap. Display the updated seating arrangement after swapping the positions of the specified students.

Input format :

The first line of input consists of an integer N, representing the number of students.

The second line consists of N space-separated integers, representing the student IDs.

The third line consists of an integer, representing the ID of the first student to swap.

The fourth line consists of an integer, representing the ID of the second student to swap.

Output format :

The output prints the updated seating arrangement after swapping the positions of the specified students.

Sample test cases :
Input 1 :
5
56 58 69 84 61
58
61
Output 1 :
56 61 69 84 58
Input 2 :
6
78 85 63 94 24 39
63
94
Output 2 :
78 85 94 63 24 39*/
#include <stdio.h>

void swap(int arr[], int n, int id1, int id2) {
  int i, temp;
  // Find the positions of the students to swap
  for (i = 0; i < n; i++) {
    if (arr[i] == id1) {
      break;
    }
  }
  int pos1 = i;

  for (i = 0; i < n; i++) {
    if (arr[i] == id2) {
      break;
    }
  }
  int pos2 = i;

  // Swap the elements
  temp = arr[pos1];
  arr[pos1] = arr[pos2];
  arr[pos2] = temp;
}

int main() {
  int n, i;
  int students[10]; // Array to store student IDs (limited to 10 students)

  // Input number of students

  scanf("%d", &n);

  // Input student IDs

  for (i = 0; i < n; i++) {
    scanf("%d", &students[i]);
  }

  // Input IDs of students to swap
  int id1, id2;
  scanf("%d", &id1);
  scanf("%d", &id2);

  // Swap the positions of students
  swap(students, n, id1, id2);

  // Print the updated seating arrangement

  for (i = 0; i < n; i++) {
    printf("%d ", students[i]);
  }
  printf("\n");

  return 0;
}// You are using GCC
