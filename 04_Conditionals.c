                        // CONDITIONAL STATEMENTS
                
                
                // IF-ELSE STATEMENTS
/*
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age<18)
    {
        printf("you can't drive");
    }
    else if(age >= 18 && age<=25)
    {
        printf("u don't have bike");
    }
    else if(age>70)
    {
        printf("g*nd k andhe dikhayi dega tujhe");
    }
    else
    {
        printf("u can drive");
    }
}
*/ 


                    //SWITCH CASE STATEMENTS
/*
    //CALCULATOR   (input in this way:- 4+5 in a line)
#include<stdio.h>
int main()
{
// int a;
// printf("enter the value of a: \n");
// scanf("%d",&a);
// char c;
// printf("enter the value of c: \n");            ("Not working kindly detect issue")
// scanf("%c",&c);
// int b;
// printf("enter the value of b: \n");
// scanf("%d",&b);
int a,b;
char c;
scanf("%d%c%d",&a,&c,&b);
switch(c)
{
case'+':
{
printf("%d",a+b);
break;
}
case'-':
{
printf("%d",a-b);
break;
}
case'*':
{
printf("%d",a*b);
break;
}
case'/':
{
printf("%f",(float)a/b);
break;
}
case'%':
{
printf("%d",a%b);
break;
}
default:
{
    printf("invalid");
    break;
}
}
}
*/



                                        //short-hand if-else statement (Terniary Operator)
/*
#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);

    // int i = age>=18 ? 100:200;
    // printf("%d",i);
    
    char m[50];
    m = age>=18 ? "u can drive":"u can't drive";          //won't work
    printf("%s",m);
}
*/



                                         //while loop
/*
#include<stdio.h>
int main()
{
    int i=0;
    while(i<=10)
    {
        printf("%d\n",i);
        i++;
    }
}
*/

                                     //for loop
/*                                     
#include<stdio.h>
int main()
{
    for(int i=0; i<=20; i++)
    {
        printf("%d\n",i);
    }
}
*/



                                     //Do-While Loop
    // 1st code type
/*                              
#include<stdio.h>
int main()
{
    int i =0;
    while(i<10)
    {
        printf("%d\n",i);
        i++;
    }
        printf("currently i is %d",i);                     
    do
    {
        printf("\nthe do while loop is running...");
    } while (i<10);                    // for while(i>10) infinite loop is running.                    
    
} 
*/

      // 2nd code type
/*
#include<stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("do while loop is running...\n");
    } while (i>10);           //for while(i=10) & while(i<10) infinite loop is running.
    
}
*/
