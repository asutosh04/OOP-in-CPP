//4)WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.
#include <stdio.h>

int fact(int n) {
    return ( n==1 || n==0 ? 1 : n*fact(n-1) );
}

int main()
{
    int f,num;
    printf("Enter any positive number: ");
    scanf("%d",&num);
    f=fact(num);
    printf("The factorial of %d is %d",num,f);
    return 0;
}


