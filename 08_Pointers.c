                                                //POINTER

/*
#include<stdio.h>
int main()
{
    int a,b,c;
    //int* p;
    //int * q;
    //int *s;
    typedef int* intptr;                //using this we can declare all pointers in single line
    intptr p,q,s;
    a = 5;
    b = 6;
    c = 7;

    p = &a;
    q = &b;
    s = &c;
    // *p = 7;          //manipulated variable value using it's pointer
// int temp;
    printf("%d",*p + *q + *s);
}
*/




                                   //ARRAY & POINTER AIRTHMETIC
/*                           
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a=3;
    int* ptra= &a;

    int vrr[] = {0,1,2,3,4,5};
    int* ptrarray = vrr;

    printf("%d\n",a);
    printf("%d\n",*ptra);

    printf("%d\n",&a);
    printf("%d\n",ptra);

    printf("%d\n",ptra+1);              //adding 1 size of int that is 4 unit 
    printf("%d\n",ptra+2);
    printf("%d\n",ptra++);              //adding 1 size of int but printing same/real value of &a
    printf("%d\n\n\n\n",ptra);          //incremented value of &a after using ptr++(increased by 1 size of int )
    
    
        //ARRAY
    printf("%d\n",vrr[0]);
    printf("%d\n",*(&vrr[0]));
    printf("%d\n",*vrr);                //arr is default pointer of any array no need to assign
    printf("%d\n\n",*ptrarray);         //ptrarray is assinged by us

    printf("%d\n",&vrr[0]);
    printf("%d\n",vrr);                 //default pointer will give address to the array at index 0
    printf("%d\n\n",ptrarray);

    printf("%d\n",vrr[3]);
    printf("%d\n",*(&vrr[3]));
    printf("%d\n",*(vrr+3));
    printf("%d\n\n",*(ptrarray+3));

    printf("%d\n",&vrr[3]);             //address of index 3 
    printf("%d\n",vrr+3);               //adding 3*size of int = 3*4 = 12  
    printf("%d\n\n",ptrarray+3);        //adding 3 to adress of index 0 will give us address of index 3
 
    return 0;
}  

// arr[i] = *(arr+i)  arr[0]=*arr 
// ptrarray is assigned pointer to vrr (pointer made by us)
// arr is default pointer of arr[]={1,2,3,4,5} similarly vrr will be pointer for vrr[]={1,2,3,4}    it's not a key word 
// arr will show address for arr[0]     & will be derefernced as *arr
// arr+i will show address for arr[i]   & will be derefernced as *(arr+i)
// adding or incrementing pointer will add 1 size of data type if it's int pointer then will be incremented by 4 if char pointer then 1  if int array pointer then will be incremented by 4 and if char arr pointer then by 1.
// vrr[i] = value at index i, &vrr[i] = address of vrr[i],  *(&vrr[i]) = value at index i as derefrenced the address of vrr[i].
// vrr = pointer of vrr[0] so will give address of element at index 1,  *vrr = dereferencing the pointer will give value of element at index 0  
// ptrarray = pointer of vrr[0] so will give address of element at index 1,  *ptrarray = dereferencing the pointer will give value of element at index 0 


// above code will show error as we are using %d for address it has done to show it in integer format so that we can understand the concept or else %p should be used tod show address or pointer it will flash hexa decimal value.
*/




//example 2
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int a[3];
    ptr = &a[3];
    for(int i=0; i<3; i++)
    {
        printf("enter the element");
        scanf("%d",&a[i]);
        //scanf("%d",&ptr[i]);    not working find the reason
        //scanf("%d",ptr+i);      not working find the reason
    }
    for(int i=0; i<3; i++)
    {
        printf("%d",a[i]);
        //printf("%d",*(ptr+i));      not working find the reason
    }
    return 0;
}
*/
