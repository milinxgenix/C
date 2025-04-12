                                      // ARRAY

/*                                 
#include<stdio.h>
int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d",arr[4]);
    return 0; 
}
*/ 

                            //to get element of array from user
/*                     
#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0; i<10; i++)
    {
        printf("enter the value for index no: %d\n",i);
        scanf("%d",&arr[i]);
        printf("the value for index %d is: %d\n",i,arr[i]);
    }
    
}
*/



                      // getting values of array by taking index no from users
/*
#include<stdio.h>
int main()
{
    int arr[10]={0,1,2,3,40,5,6,7,80,9};
    int i;
    printf("enter the index:\n");
    scanf("%d",&i);
    printf("\n the value for index %d is: %d\n",i, arr[i]);
}
*/




               // printing array for known index no by taking just elements from users
/*
#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        printf("enter the elements for index %d\n",i);
        scanf("%d",&arr[i]);
    }
        printf("your array is as below \n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
}      
*/           
            
            
                   // printing array by taking index no & elements from users
/*
#include<stdio.h>
int main()
{
    int j;
    printf("enter the no. of elements: \n");
    scanf("%d",&j);
    int arr[j];
    for(int i=0; i<j; i++)
    {
        printf("enter the values for index %d\n",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<j; i++)
    {
        printf("%d ",arr[i]);
    }
}
*/



                                    //REVERSE ARRAY
                                    
/*                          METH 1 :- reversing the loop
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    
}
*/


/*                          METH 2 :- using remainder concept
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r;
    int sum =0;
    while(n>0)
    {
        //int r;
        r = n%10;
        n = n/10;
        //break;
    
        if(r%2 == 0)                      //SOLVE IT USING FOR LOOP
        {
            sum = sum + r;
        }
    
    }
    printf("%d",sum);
}
*/

