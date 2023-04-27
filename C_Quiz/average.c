#include <stdio.h>

int main (void) 
{
  float sum = 0;
  float average = 0;
  float num;
  
  for(int i=0 ; i<4 ; i++)
  {
    printf("Enter a number : ");
    scanf("%f", &num);
    
    sum += num; //sum = sum + num;
  }
   
  average = (float) sum / 4.0;
  printf("Sum = %.2f \nAverage = %f \n", sum, average);
   
  return 0;
}
