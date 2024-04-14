/*Problem Statement

Sathish is developing a simple inventory management system for a store. The store owner wants to update the stock levels of certain products based on the latest shipment.

Write a program that takes the current stock levels as input, along with the product code to search for and the new quantity received. Implement a linear search program to find the product in the inventory and update its stock with the new quantity.

Finally, print the updated inventory after the stock update.

Input format :

The first line consists of an integer N, representing the size of the inventory.

The second line consists of N space-separated integers, representing the current stock levels.

The third line consists of an integer X, representing the product code to search for.

The fourth line consists of an integer M, representing the new quantity received.

Output format :

The output prints the updated inventory after the search and replace operation.

Sample test cases :
Input 1 :
5
45 56 78 89 65
78
85
Output 1 :
45 56 85 89 65
Input 2 :
8
73 91 45 67 98 36 22 49
73
75
Output 2 :
75 91 45 67 98 36 22 49*/

#include <stdio.h>

int main() {
  int n, i, product_code, new_quantity;
  int inventory[10]; // Array to store current stock levels (limited to 10 items)

  // Input inventory size

  scanf("%d", &n);

  // Input current stock levels

  for (i = 0; i < n; i++) {
    scanf("%d", &inventory[i]);
  }

  // Input product code to update

  scanf("%d", &product_code);

  // Input new quantity received

  scanf("%d", &new_quantity);

  // Find the product using linear search
  int found = 0;
  for (i = 0; i < n; i++) {
    if (inventory[i] == product_code) {
      inventory[i] = new_quantity;
      found = 1;
      break;
    }
  }

  // Print updated inventory

  for (i = 0; i < n; i++) {
    printf("%d ", inventory[i]);
  }
  printf("\n");

  if (!found) {
    printf("Product code %d not found in inventory.\n", product_code);
  }

  return 0;
}// You are using GCC
