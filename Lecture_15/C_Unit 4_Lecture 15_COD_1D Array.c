/*Problem Statement﻿

Raj, a dedicated student, is developing a program to calculate the weighted average of his scores. The program will first take an integer N, indicating the number of subjects. For each subject, it will input an integer score and a float weight. The program will then compute and display the weighted average of these scores.

The weighted average allows Raj to account for different subjects' varying importance or difficulty. Some subjects might be more critical for his overall academic goals, so he assigns them a higher weight. Assist Raj in completing the program successfully. 

Formula: weighted average=sum(score*weight)/sum weight

Input format :

The first line consists of a single integer value n, representing the number of subjects.

The next n lines contain two space-separated values, representing the score and its corresponding weight of each subject.

Output format :

The output displays a single floating-point value representing the weighted average of the scores, rounded off to two decimal places.

Sample test cases :
Input 1 :
4
75 0.20
95 0.35
85 0.15
65 0.30
Output 1 :
80.50
Input 2 :
5
91 0.10
65 0.15
80 0.20 
73 0.25
68 0.30
Output 2 :
73.50
Input 3 :
10
75 0.20
95 3.35
85 2.15
65 1.30
53 4.25
48 5.0
39 6.37
28 7.8
18 8.8
10 10.0
Output 3 :
36.39 */

#include <stdio.h>

int main() {
    // Input the number of subjects
    int n;
    scanf("%d", &n);
    
    // Declare variables for total score and total weight
    float total_score = 0.0;
    float total_weight = 0.0;
    
    // Input scores and weights for each subject
    for (int i = 0; i < n; i++) {
        int score;
        float weight;
        scanf("%d %f", &score, &weight);
        
        // Add score weighted by its weight to the total score
        total_score += score * weight;
        
        // Add weight to the total weight
        total_weight += weight;
    }
    
    // Calculate the weighted average
    float weighted_average = total_score / total_weight;
    
    // Display the result rounded off to two decimal places
    printf("%.2f", weighted_average);
    
    return 0;
}
