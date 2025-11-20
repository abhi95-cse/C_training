//write a function which will accept two input parameter x,y and returns x^2+y^2
#include <stdio.h>
int sqrt(int x, int y)
{
    int sum = (x*x)+(y*y);
    return sum;
}
void main()
{
    int x = 5;
    int y = 6;
    printf("sum is %d",parameter(x,y));
}