//2)Write a function to subtract two values of type float and returns the result 

#include <stdio.h> 

   //defining the function

float sub(int a, int b){ 
   return a-b; 
} 
 
int main() 
{ 
   float num1, num2, num3; 
   printf("Enter first number: "); 
   scanf("%f", &num1); 
   printf("Enter second number: "); 
   scanf("%f", &num2); 
 
   //Calling the function 
 
   num3 = sub(num1, num2); 
   printf("Difference of the entered numbers: %f", num3); 
   return 0; 
} 
