/*Problem Statement
Helen is tasked with implementing a new employee ID system in her company. To achieve this, she needs to create an array that can hold 'n' integers, where 'n' represents the number of employees. Each element in this array should represent a unique employee ID. 




The unique ID for each employee is determined by adding 100 to their respective index in the array. The objective is to initialize the array such that each element contains its corresponding unique employee ID, and then display the contents of the fully initialized array.

Input format : The input consists of a positive integer 'n', representing the number of employees. 

Output format:The output displays the unique employee ID of 'n' employees separated by space.

Refer to the sample output for the formatting specifications.

Sample test cases :
Input 1 :
1
 Output 1 :
100 

Input 2 :
30 
Output 2 :
100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122 123 124 125 126 127 128 129 */


#include <stdio.h>
int main()
{
    int n,index;
    scanf("%d",&n);
    int employee[n];
    for(int i=0;i<n;i++)
    {
        index=i+100;
        printf("%d ",index);
    }
} 