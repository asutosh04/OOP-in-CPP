//6) WAP to swap the values of two variables by using a suitable user defined function (say SWAP) for it.
#include<stdio.h>
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int x,y;
    printf("Please enter the two numbers to swap their values:\n");
    scanf("%d %d", &x, &y);
    printf("Original: %d %d\n", x, y);
    swap(&x,&y);
    printf("Swapped: %d %d\n", x, y);
}
