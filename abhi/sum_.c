#include <stdio.h>
int myadd (int a,int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
    int a = 35;
    int b = 44;
    printf("sum is %d/n.", myadd(a,b));
    int c = 56;
    int d = 89;
    printf("sum is %d/n.",myadd(c,d));
}