//1)Write a function to add two values of type integer and returns the result 
#include <stdio.h> 

   //defining the function

int sum(int a, int b){ 
   return a+b; 
} 
 
int main() 
{ 
   int num1, num2, num3; 
   printf("Enter first number: "); 
   scanf("%d", &num1); 
   printf("Enter second number: "); 
   scanf("%d", &num2); 
 
   //Calling the function 
 
   num3 = sum(num1, num2); 
   printf("Sum of the entered numbers: %d", num3); 
   return 0; 
} 
