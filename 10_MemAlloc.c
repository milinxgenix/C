                                            //MEMORY ALLOCATION        must use stdlib.h
                                            
                                            
//malloc() - memory allocation -  initialize allocated memory to garbage value 
//Example 1 :-
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int* ptr;
    ptr = (int*) malloc(sizeof(int));        //allocating memory dynamically 
    scanf("%d",ptr);
    printf("%d",*ptr);
}
*/



//Example 2 :-
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int* ptr;
    ptr = (int*) malloc(3*sizeof(int));        //created a dynamic array of size 3 by allocating memory dynamically 
    for(int i=0; i<3; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    printf("{");
    for(int i=0; i<3; i++)
    {
        printf("%d, ",ptr[i]);
    }
    printf("}");
}
*/




//calloc() - contiguous allocation -  initialize allocated memory to 0
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int* ptr;
    scanf("%d",&n);            //don't do it above int*ptr otherwise infinte loop will start
    
    ptr = (int*) calloc(n, sizeof(int));           // ptr = (int*) malloc(n * sizeof(int)); 
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("{");
    for(int i=0; i<n; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("}");
}
*/



//realloc() - Reallocation -  to change size of previously allocated memory
/*                      
                          //firstly allocating memory using calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int* ptr;
    scanf("%d",&n);            //don't do it above int*ptr otherwise infinte loop will start
    ptr = (int*) calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("{");
    for(int i=0; i<n; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("}\n");

    //free(ptr);  -- if free(ptr) is used here then reallocation won't be possible as previously allocated memory to ptr is cleared 

                                               
                                               
                                               //increasing size of array by REALLOC
    printf("enter the size of new array\n");
    scanf("%d",&n);
    ptr = (int*) realloc(ptr, n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("the newly created array is:- \n");
    printf("{");
    for(int i=0; i<n; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("}\n");

    free(ptr);           //clearing all allocated memories
}
*/



/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     char c[40];
     gets(c);
     puts(c);
     return 0;
}
*/
