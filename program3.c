#include <stdio.h>
int main(){
    int p;
    int r;
    int t;
    printf("Enter the principle amount: ");
    scanf("%d",&p);
    printf("Enter the rate: ");
    scanf("%d",&r);
    printf("Enter the time (in years): ");
    scanf("%d",&t);
    int si = (p*r*t)/100;
    printf("Simple interest calculated is %d",si);

    return 0;
}