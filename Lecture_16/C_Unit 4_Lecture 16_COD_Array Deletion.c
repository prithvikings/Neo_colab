/*Problem Statement

Nandhu is restructuring the office and wants to remove the last 2 members from the team in the performance matrix list. Write a program to eliminate the last 2 members and display the updated list of office members.

Input format :

The first line of input is an integer 'n', the number of office members.

The second line of input consists of 'n' space-separated integers representing the IDs of office members.

Output format :

The output displays the list of office members after removing the last 2 members.

If the office members list less than 2 members, print "Array size should be at least 2".
Sample test cases :
Input 1 :
4
6 7 4 3
Output 1 :
6 7
Input 2 :
1
10
Output 2 :
Array size should be at least 2
Input 3 :
10
89 84 27 23 48 19 1 38 27 39
Output 3 :
89 84 27 23 48 19 1 38*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Check if the number of office members is less than 2
    if (n < 2) {
        printf("Array size should be at least 2\n");
        return 0;
    }

    int officeMembers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &officeMembers[i]);
    }

    // Remove the last 2 members
    n -= 2;

    // Display the updated list of office members
    for (int i = 0; i < n; i++) {
        printf("%d ", officeMembers[i]);
    }
    printf("\n");

    return 0;
}
