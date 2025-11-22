// write a c progrmme which add 3 numbers  and call by refrence
#include<stdio.h>
void addition(int *a, int *b,int* c)
{
    int addition = (*a)+(*b)+(*c);

    printf("%d",addition);

}
void main()
{
int a= 8;
int b= 6;
int c= 5;
addition(&a,&b,&c);
}
