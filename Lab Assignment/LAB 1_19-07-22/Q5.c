//5) WAP to find out the sum of digits of a number n by using function.
#include <stdio.h>
int sumOfDigit(int n){
    int sum=0,r;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    return sum;
}
int main()
{
    int n,result;
    printf("Enter a number:");
    scanf("%d",&n);
    result = sumOfDigit(n);
    printf("Sum Of Digit is:%d",result);
    return 0;
}
