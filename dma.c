#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n;
    printf("enter the size of the array\n");    
    scanf("%d",&n);

    ptr = (int *)malloc(n * sizeof(int));

    //input
    for (int i = 0; i < n; i++)
    {
        printf("enter value %d\n",i);
        scanf("%d",&ptr[i]);
    }

    //output
    for (int i = 0; i < n; i++)
    {
        printf("the value at %d is %d\n",i,ptr[i]);
    }
    free(ptr);
    
    return 0;
}