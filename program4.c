#include <stdio.h>
int main(){
    int side;
    printf("Enter the length of side of the square: ");
    scanf("%d",&side);
    int perimeter = side*4;
    int area = side*side;
    printf("Perimeter of the square is: %d\n",perimeter);
    printf("Area of the square is %d\n",area);
    return 0;

}