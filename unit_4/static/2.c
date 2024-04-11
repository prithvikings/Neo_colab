/*Problem Statement
Sharangee is working on an application to assist urban planners in evaluating the sustainability of different city zones. The program should collect user input for three key sustainability metrics: air quality index, green space percentage, and public transportation accessibility. These metrics should be entered into a 3x3 matrix (a 2D array), each representing a different city zone. 

The user will be prompted to input values for each zone, and then the program will display the details of air quality, green space, and public transportation accessibility for each zone in a user-friendly format

Input format : The input consists of 3 rows where each row consists of 3 space-separated float values representing air quality index, green space percentage, and public transport accessibility for each habitat respectively.

  Output format :  The first line of output prints "Air quality index: " followed by the air quality of three habitats as float values rounded off to two decimal places separated by space.  
  
  The second line of output prints "Green space percentage: " followed by the green space percentage of three habitats as float values rounded off to two decimal places separated by space.  
  
  The third line of output prints "Public transportation accessibility: " followed by the public transportation accessibility of three habitats as float values rounded off to two decimal places separated by space.
  
  Input 1 :
25.5 50.0 10.0
28.0 45.5 7.8
31.8 55.0 9.0

Output 1 :
Air quality index: 25.50 28.00 31.80 
Green space percentage: 50.00 45.50 55.00 
Public transportation accessibility: 10.00 7.80 9.00 


Input 2 :
12.3 8.9 6.5
23.6 15.8 3.7
32.0 20.4 10.0

Output 2 :
Air quality index: 12.30 23.60 32.00 
Green space percentage: 8.90 15.80 20.40 
Public transportation accessibility: 6.50 3.70 10.00  */

#include<stdio.h>
int main(){
    float ecosystem[3][3];
    for(int i=0;i<3;i++)
    {
        scanf("%f %f %f",&ecosystem[i][0],&ecosystem[i][1],&ecosystem[i][2]);
    }
    printf("Air quality index: %.2f %.2f %.2f",ecosystem[0][0],ecosystem[1][0],ecosystem[2][0]);
    printf("\nGreen space percentage: %.2f %.2f %.2f",ecosystem[0][1],ecosystem[1][1],ecosystem[2][1]);
    printf("\nPublic transportation accessibility: %.2f %.2f %.2f",ecosystem[0][2],ecosystem[1][2],ecosystem[2][2]);
    return 0;
}
