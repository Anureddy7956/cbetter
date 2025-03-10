#include <stdio.h>

int main() {
  int ages[] = {17, 19, 18, 35, 20, 45, 26, 87, 70};
 
  float average, sum = 0;
  
  //length of the array
  int length = sizeof(ages) / sizeof(ages[0]);
    
  // Loop through the elements of the array 
  for (int i = 0; i < length; i++) {
    sum += ages[i]; //to calculate the sum
  }
  
  // Calculate the average by dividing the sum by the length
  average = sum / length;
  
  // Prints the average
  printf("The average age is: %.2f\n", average);
  
  return 0;
}