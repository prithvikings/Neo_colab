/*Problem Statement
In a busy airport, passengers are holding tickets with unique numbers. 

Write a program using the linear search algorithm to check if a given ticket number exists in the array of ticket numbers. 

If the ticket number is found, print a congratulatory message along with the position where it's found. If the ticket number is not found, encourage the passenger with a message for better luck on the next attempt.

Input format : The first line of input consists of an integer N, representing the number of tickets.

The second line consists of N space-separated integers, representing the ticket numbers.

The third line consists of an integer, representing the ticket number to search. 

Output format : If the ticket number is found, print "Congratulations! Ticket number X found at position Y!", where X is the ticket number and Y is the position (position starts from 1).

Otherwise, print "Better luck next time! Ticket number X not found!", where X is the ticket number.

Input 1 :
5
123 456 789 321 654
321

Output 1 :
Congratulations! Ticket number 321 found at position 4!

Input 2 :
6
741 456 982 364 789 258
369

Output 2 :
Better luck next time! Ticket number 369 not found!*/


#include <stdio.h>
int main() {
    int N, ticket_number, i;
    scanf("%d", &N);
    int tickets[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &tickets[i]);
    }
    scanf("%d", &ticket_number);
    int found = 0;  
    for (i = 0; i < N; i++) {
        if (tickets[i] == ticket_number) {
            found = 1;
            printf("Congratulations! Ticket number %d found at position %d!\n", ticket_number, i + 1);
            break;
        }
    }
    if (!found) {
        printf("Better luck next time! Ticket number %d not found!\n", ticket_number);
    }
    return 0;
}