#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;
    ptr1=(int *)malloc(5);
    ptr2=(int *)calloc(3,4);
    if(ptr1==NULL && ptr2==NULL)
    {
        printf("Malloc and Calloc Memory not allocated \n");
    }
     else
    {
        printf("Malloc and Calloc Memory allocated \n");
        ptr1=realloc(ptr1,10);
        ptr2=realloc(ptr2,20);
        printf("Realloc Successfully");
    }
}
