/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int maths,chemistry;
  float total,average;
  printf("Enter the marks of two subjects:\n");
  scanf("%d,%d",&maths,&chemistry);
  total=maths+chemistry;
  average=total/2;
  printf("Average mark=%.2f\n",average);
  
  return 0;
}

