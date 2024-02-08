#include <stdio.h>
//__FILE__ - the name of the working file
//__LINE__ - the number of the line that is being processed
//__DATE__ - the current date of processing
//__TIME__ - the current time of processing

int main()
{
 printf("File: %s\n",__FILE__);
 printf("Line: %s\n",__LINE__);
 printf("Date: %s\n",__DATE__);
   printf("Time: %s\n",__TIME__);

    return 0;
}
