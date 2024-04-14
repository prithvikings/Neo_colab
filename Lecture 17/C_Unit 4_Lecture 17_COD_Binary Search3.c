/*Problem Statement

In a classroom with assigned seat numbers ranging from 1 to N, students enter the room and occupy their seats. The seating arrangement is initially in sequential order, but due to a mix-up, one student's seat is left unoccupied.

Create a program that utilizes binary search to identify and print the seat number that is missing, helping the teacher quickly resolve the seating discrepancy.

Input format :

The first line of input consists of an integer N, representing the total number of seats in the classroom.

The second line consists of N distinct space-separated integers, representing the occupied seat numbers.

Output format :

The output prints a single integer, representing the missing seat number.

If no seat is found missing, print "No missing seat number found in the classroom."

Input format :

The first line of input consists of an integer N, representing the total number of seats in the classroom.

The second line consists of N distinct space-separated integers, representing the occupied seat numbers.

Output format :

The output prints a single integer, representing the missing seat number.

If no seat is found missing, print "No missing seat number found in the classroom."

Sample test cases :
Input 1 :
7
1 2 3 4 6 7 8
Output 1 :
5
Input 2 :
6
2 3 4 5 6 7
Output 2 :
1
Input 3 :
3
1 2 3
Output 3 :
No missing seat number found in the classroom.*/

#include <stdio.h>

int find_missing_seat(int N, int seats[]) {
    int left = 0, right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the seat at mid position is missing
        if (seats[mid] != mid + 1) {
            // If the seat at mid is missing and its left neighbor is present, mid is the missing seat
            if (mid == 0 || seats[mid - 1] == mid) {
                return mid + 1;
            }
            // Otherwise, search in the left half
            right = mid - 1;
        } else {
            // If the seat at mid is not missing, search in the right half
            left = mid + 1;
        }
    }

    // If no missing seat is found
    return -1;
}

int main() {
    int N;

    scanf("%d", &N);

    int seats[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &seats[i]);
    }

    int missing_seat = find_missing_seat(N, seats);

    // Output
    if (missing_seat == -1) {
        printf("No missing seat number found in the classroom.\n");
    } else {
        printf(" %d\n", missing_seat);
    }

    return 0;
}