//free
#include<stdio.h>
int main()
{
    int *ptr1,*ptr2;
    ptr1=(int *)malloc(6);
    ptr2=(int*)calloc(6,10);
    if(ptr1==NULL && ptr2==NULL)
    {
        printf("Malloc and Calloc Memory not allocated \n");
    }
    else
    {
        printf("Malloc and Calloc Memory allocated \n");
    }
    free(ptr1);
    free(ptr2);
   printf("All Freed successfully");
}
