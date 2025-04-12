                                     //Defining  Functions
            // 1st code
/*
#include<stdio.h>
void myline(char* str1)
{
    printf("the line u asked for is: \n %s hope u got ur line\n",str1);
}
int main()
{
    myline("Hello! Milind\n"); 
}
*/


        
        //2ND CODE
/*
#include<stdio.h>
int sum(int A , int B)
{
    return A+B;
}

float  avg(int A, int B)
{
    return (A+B)/2;
}


int main()
    {
        printf("%d\n",sum(100,80));
        printf("%f", avg(2,3));
    }
*/

        
        
        
        //3RD code
/*
#include<stdio.h>
int sum(int A , int B)
{
    return A+B;
}

int main()
    {
        int A;
        printf("enter the FIRST number:\n");
        scanf("%d",&A);
        int B;
        printf("enter the SECOND number:\n");
        scanf("%d",&B);
        printf("%d",sum(A,B));
        return 0;
    }
*/





                            //passing "charater array"/string as a function (string is called as character array) 
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void print(char strg[])      //here strg is not a keyword 
{
    int i;
    while(strg[i] != '\0')
    {
        printf("%c",strg[i]);
        i++;
    }
}

int main()
{
    char a[50] = "Kr. Milind";

    print(a);       //using user made fn to print strings
    return 0;
}                            
*/



                            //MAKING FUNCTION TO TAKE USER INPUT AS STRING
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void getinput(char strg[])
{
    int i;
    while(strg[i] != '\0')
    {
        scanf("%c", &strg[i]);
        i++;
    }
}
int main()
{
    char c[4];                      //only working upto 4 char
    getinput(c);
    printf("%s",c);
    return 0;
}
*/





                                     //passing array as a funct :- incomplete complete it........
//1. by declaring array as parameter in the funct.
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void avg(int arr[], int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        printf("%d, ", arr[i]);
        sum = sum + arr[i];
        break;
    }
    printf("%d",sum);
}
int main()
{
    int vrr[5] = {1,2,3,4,5};
    int n = sizeof(vrr);
    avg(vrr,n);
    return 0;
}   
*/




//2. using array pointer 

//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?
//      ? -- ? ___ ?








                              // FUNCTION CALL BY REFERNCE & CALL BY VALUE

/*                      //confusion check output
// calling by value
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int func(int a)
    {
        a = 7;
        printf("%d\n",a);
    }
int main()
{
    int x;
    x = 9;
    printf("%d\n",func(x));
    return 0;
}
*/

/*
//calling by refernce
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 5;
    int y = 8;
    swap(&x,&y);
    printf("now x is %d\n",x);
    printf("now y is %d\n",y);
}
*/

