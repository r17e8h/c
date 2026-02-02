#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int sum = a+b;
    int product = a*b;
    printf ("Sum of two number is %d\n",sum);
    printf ("Product of two number is %d",product);
    return 0;
}