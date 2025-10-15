//calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr;
   ptr=(int *)calloc(10,5*sizeof(int));
   if(ptr==NULL)
   {
       printf("Memory not allocated");
   }
   else
   {
       printf("\nMemory allocated");
   }
}

