/*Problem Statement

Reni is working on a programming challenge where she needs to add an element 'x' into an existing array at a specified index 'k'. The task requires her to take an existing array and two integers, 'x' and 'k'. Her goal is to insert the element 'x' into the array at the index 'k', effectively shifting the subsequent elements to the right. Once the insertion is complete, Reni should display the updated array.

Help her with the program.


Input format : The first line of input is an integer 'n', representing the initial size of the array.  

The second line of input consists of 'n' space-separated integers, the elements of the array.  

The third line of input is an integer 'x,' the element to be inserted.  

The fourth line of input is an integer 'k', representing the position to insert 'x.' 

Output format : The output displays the array after inserting 'x' at position 'k', separated by a space. 

Input 1 :
5
10 20 30 40 50
15
1

Output 1 :
10 15 20 30 40 50 

Input 2 :
10
2 5 3 9 8 12 20 97 37 1000
23
10 
Output 2 :
2 5 3 9 8 12 20 97 37 1000 23  

Input 3 :
3
178 567 1000
897
2
Output 3 :
178 567 897 1000 */


#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[11];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x,k;
    scanf("%d %d",&x,&k);
    for(int i=n-1;i>=k;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[k]=x;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }    
}