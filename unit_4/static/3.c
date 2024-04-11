/*Problem Statement

Gokul is fascinated by numbers and wants to categorize them. Write a program to input an array of integers, then count and print the number of positive, negative, and zero elements. 

Implement a function countAndPrint that takes the array as a parameter and categorizes the numbers.

Input format : The first line consists of an integer n, representing the size of the array. 

The next line consists of n space-separated integers, representing the array elements. 

Output format : The first line displays "Positive: " followed by an integer, representing the count of positive elements.

The second line displays "Negative: " followed by an integer, representing the count of negative elements.

The third line displays "Zero: " followed by an integer, representing the count of zeros.

Input 1 :
8
10 20 -20 -10 33 47 55 0 

Output 1 :
Positive: 5
Negative: 2
Zero: 1

Input 2 :
10
12 23 45 86 78 -20 -88 -44 -46 -58

 Output 2 :
Positive: 5
Negative: 5
Zero: 0

Input 3 :
3
-100 0 100 

Output 3 :
Positive: 1
Negative: 1
Zero: 1
*/

#include<stdio.h>
void countAndPrint(int arr[],int n)
{
    int pos=0,neg=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive: %d",pos);
    printf("\nNegative: %d",neg);
    printf("\nZero: %d",zero);
        
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countAndPrint(arr,n);
    
}