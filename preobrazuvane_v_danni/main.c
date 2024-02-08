#include <stdio.h>
#include "quadraticroots.h"


int main()
{
int a=3,b=5,c=-2;
long double result1;

struct QuadraticRootsResult findroots(long double a, long double b, long double c);
 struct QuadraticRootsResult otg;

otg=findroots(a,b,c);

if(otg.norealroots==0)
{
    printf("x1:%d\n x2:%d",otg.x1,otg.x2);
}else{
    if(otg.norealroots==1)
    printf("There aren't real roots");
}


    return 0;
}
