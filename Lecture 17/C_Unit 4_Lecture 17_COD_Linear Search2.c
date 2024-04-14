/*Problem Statement

The university has a list of student GPAs, and they want to identify students who are eligible for a scholarship. To be eligible, a student's GPA must be greater than 3.5.

Your task is to write a program using linear search to find the number of eligible students for scholarships.

Input format :

The first line of input consists of an integer N, representing the number of students.

The second line consists of N space-separated floating-point numbers, each representing the GPA of a student.

Output format :

The output prints the number of eligible students (those with a GPA greater than 3.5).

If no such students are found, print "No students found with GPA > 3.5"

Sample test cases :
Input 1 :
7
3.2 4.1 2.9 3.8 3.5 3.7 3.6

Output 1 :
4
Input 2 :
4
3.5 3.7 2.5 4.6

Output 2 :
2
Input 3 :
5
1.2 2.3 2.6 3.4 3.5

Output 3 :
No students found with GPA > 3.5*/

#include <stdio.h>
int main() {
  int n, i, count = 0;
  float gpas[10]; // Array to store student GPAs (limited to 10 students)
  float threshold = 3.5; // Minimum GPA for scholarship eligibility
  // Input number of students
  scanf("%d", &n);
  // Input student GPAs
  for (i = 0; i < n; i++) {
    scanf("%f", &gpas[i]);
  }
  // Find eligible students
  for (i = 0; i < n; i++) {
    if (gpas[i] > threshold) {
      count++;
    }
  }
  // Print results
  if (count > 0) {
    printf("%d\n", count);
  } else {
    printf("No students found with GPA > 3.5\n");
  }
  return 0;
}// You are using GCC