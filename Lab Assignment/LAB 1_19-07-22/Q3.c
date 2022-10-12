//3)Write a function to multiply two values of type int & double and returns the Result
#include <stdio.h> 
 
   //defining the function

int multiply(int a, int b){ 
   return a*b; 
} 
 
int main() 
{ 
   int num1, num2, num3; 
   printf("Enter first number: "); 
   scanf("%d", &num1); 
   printf("Enter second number: "); 
   scanf("%d", &num2); 
 
   //Calling the function 
 
   num3 = multiply(num1, num2); 
   printf("Multiplication of the entered numbers: %d", num3); 
   return 0; 
} 

