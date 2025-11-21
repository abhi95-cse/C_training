// write a function which will multiply and call it by refrence
#include<stdio.h>
void product(int *a, int *b,int* c)
{
    int product = (*a)*(*b)*(*c);

    printf("%d",product);

}
void main()
{
int a= 8;
int b= 6;
int c= 5;
product(&a,&b,&c);
}
