/*Problem Statement

Emma, a financial analyst, is working on organizing stock prices efficiently. She needs a program that sorts the given stock prices in ascending order. 

Your task is to assist Emma by creating a program that inputs the number of stock prices, takes input for each price, applies a bubble sort algorithm, and then displays the sorted stock prices.

Input format : The first line of input consists of an integer N, representing the number of stock prices.

The second line consists of N space-separated integers, representing the stock prices. 

Output format : The output prints the stock prices in ascending order, after applying the bubble sort algorithm. 

Input 1 :
6
145 236 987 453 258 953

Output 1 :
145 236 258 453 953 987 

 Input 2 :
5
783 257 167 349 852

Output 2 :
167 257 349 783 852 
*/

#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int N;
    scanf("%d", &N);
    
    int prices[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &prices[i]);
    }
    
    bubbleSort(prices, N);
    for (int i = 0; i < N; i++) {
        printf("%d ", prices[i]);
    }
    printf("\n");
    
    return 0;
}