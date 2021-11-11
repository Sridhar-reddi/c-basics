#include<stdio.h>
void main ()
{
	int side;
    printf("side of the square?");
    scanf("%d", &side);
    printf("area of the square %d",side*side);
    printf("\nperimeter of the square %d", 4*side);
}
