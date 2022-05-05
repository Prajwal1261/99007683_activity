#include <stdio.h>
#include "header.h"
void fun()
{
   char string[20]={"DARSHAN"};
   int count = 0, sum=0;
   printf(" string name is: %s\n", string);
   for(int i=0; i<string[count]; i++)    
 {
        while (count < string[count])
        {
		printf(" %c = %x\n", string[count], string[count] );
		 ++ count ;
         sum=sum+string[count];
        }

 }
        printf("sum is %d\n", sum);

}