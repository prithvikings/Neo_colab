/*Problem Statement

In a gaming tournament, players are ranked in ascending order based on their scores.

Your task is to design a program using binary search to determine the score of the player positioned at the kth place, enabling the organizers to swiftly identify individual performance levels.

The program takes the total number of players, their sorted scores, and the rank (k) as input, and outputs the score of the player ranked at the kth position(position value starts from 1).

Input format :

The first line of input consists of an integer N, representing the total number of players in the tournament.

The second line consists of N distinct space-separated integers, representing the sorted list of players' scores.

The third line consists of an integer k, representing the rank of the player whose score needs to be determined.

Output format :

The output prints a single integer, representing the score of the player ranked at position k in the  tournament 
Sample test cases :
Input 1 :
7
12 15 34 47 49 57 58
3
Output 1 :
34
Input 2 :
6
24 25 37 48 98 99
5
Output 2 :
98*/
#include <stdio.h>

int find_player_score(int N, int scores[], int k) {
    int left = 0, right = N - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the current mid position is the kth player, return its score
        if (mid == k - 1) {
            return scores[mid];
        }
        // If the kth player is to the left of mid, adjust the right boundary
        else if (mid > k - 1) {
            right = mid - 1;
        }
        // If the kth player is to the right of mid, adjust the left boundary
        else {
            left = mid + 1;
        }
    }

    // If k is out of range, return -1
    return -1;
}

int main() {
    int N, k;

    scanf("%d", &N);

    int scores[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }


    scanf("%d", &k);

    // Output
    printf(" %d\n",  find_player_score(N, scores, k));
    return 0;
}
