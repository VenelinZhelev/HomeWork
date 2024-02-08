#include <stdio.h>
#include <stdlib.h>

#define UMN(A,B){\
int sum,stepen;\
sum=a+b;\
stepen=sum*sum;\
printf("%d",stepen);\
}
int main()
{
    int a=5,b=6;
    UMN(a,b);
    return 0;
}
