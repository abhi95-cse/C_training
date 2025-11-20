//write a c function which will accept three parameter l,b,h and returns volume of cube
#include <stdio.h>
int volume(int l,int b,int h)
{
    int v = l*b*h;
    return v;
}
void main()
{
    int l = 6;
    int b = 4;
    int h = 8;
    printf("v is %d",volume (l,b,h));
}