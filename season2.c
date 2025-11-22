#include <stdio.h>
enum months
{
    jan=1,feb,mar,april,may,jun,jly,aug,sept,oct,nov,dec

};
void main()

{
    enum months m ;
    m = oct;
    char *season;
    switch (m)
    {
        case dec: case jan: case feb:
        season = "winter";break;
        case mar: case april:case may:
        season = "summer";break;
        case jun : case jly:case aug:
        season = "rainy";break;
        case sept: case oct:case nov:
        season = "spring";break;
    
        
    }
        printf("%d is %s\n",m,season);
        

}