#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=12;
    int b=18;
    int sum=a;
    int nod;
    for(int i=1; i<=b;i++){
        if(sum%b==0){
            nod=sum;break;
        }
        sum=a*i;
    }
    printf("NOD e %d",nod);
    return 0;
}
