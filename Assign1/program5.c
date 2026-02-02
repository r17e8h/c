#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf ("After swapping, the first number becomes %d and second number become %d",a,b);
    return 0;
}