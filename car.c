// create a structure with three variables name of the car maximum speed and price store in array of structure and display
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name [100];
    char speed [100];
    int price;

};
void main()
{
    int n;
    printf("enter number of car:");
    scanf("%d",&n);

    struct car b[n];
    for (int i = 0; i<n; i++)
    {
        printf("enter the name of car:");
        scanf("%s",b[i].name);
        printf("enter maximum speed of the car:");
        scanf("%s",b[i].speed);
         printf("enter the price of the car:");
         scanf("%d",&b[i].price);

    }
    printf("your information:\n");
    for (int i = 0; i<n; i++)
    {
       printf("%s\n",b[i].name); 
       printf("%s\n",b[i].speed);
       printf("%d\n",b[i].price);
    }


}

