//write a c function which will accept one input parameter or returns de perimeter of circle,declare pi as a constant.
#include <stdio.h>
float perimeter(int r)
{
const float pi = 3.14;
float peri = 2 * pi * r;
return peri;
}
void main()
{
    int r = 5;
    printf("peri is %f",perimeter(r));
}