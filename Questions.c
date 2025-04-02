       //Q10 :-   write a C program to take n integer input from user and store them in array then copy all the elements in another array but in reverse order?
      // soln :-
/*
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0; i<n; i++)
    {
        //printf("%d",i);
        scanf("%d",&arr[i]);                    //string mei & nhi lgta scanf mei array mei lgta h 
    }
    // for reversing create a new array
    int rev[n]; 
    int j = 0;  
    for(int i=n-1; i >= 0; i--)  
    {  
        //rev[(n-1)-i] = arr[i]; 
        rev[j] = arr[i]; 
        j++;  
    }  
    printf("The Reversed array: ");  
    for(int i=0; i<n; i++)
    {  
        printf("%d ", rev[i]);  
    }  
}  
*/

 

                    //Q8 :- Write a c program to find prime number between given intervals
                    //soln :-
/*
#include<stdio.h>
int main()
{
    int s,e;
    printf("enter the starting point 's': ");
    scanf("%d",&s);
    printf("enter the starting point 'e': ");
    scanf("%d",&e);
    
    int flag;
    
    for(int i=s; i<e; i++)
    {
        flag = 0;
        int j;
        for(j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
}
*/



                    //Q1 :- write a c program for the input value of sales amount commission...
                    //soln :-
/*
#include<stdio.h>
int main()
{
    float s;
    printf("enter the sale amount: ");
    scanf("%f",&s);
    float c;
    if(s<=5000)
    {
        printf("commission is NIL");
    }
    else if(s>5000 && s <=10000)
    {
        c = (2*s)/100;
        printf("commission is %.2f",c);
    }
    else
    {
        c = (5*s)/100;
        printf("commission is %.2f",c);
    }
}
*/



                    //Q5   :- money distribution into 100,50,10rs notes
                    //soln :-
/*
#include<stdio.h>
int main()
{
    int a;
    printf("enter the amount: ");
    scanf("%d",&a);
    int nh,nf,nt;
    nh = nf = nt = 0;
    if(a>=100)
    {
        nh = a/100;
        a -= nh*100; 
    }
    if(a>=50)
    {
        nf = a/50;
        a -= nf*50;
    }
    if(a>=10)
    {
        nt = a/10;
        a -= nt*10;
    }
    printf("no of 100s note are: %d\n",nh);
    printf("no of 50s note are: %d\n",nf);
    printf("no of 10s note are: %d\n",nt);
}
*/





                    //Q9 profit & loss
                    //soln :-
/*
#include<stdio.h>
int main()
{
    int cp, sp, profit, profit_per, loss, loss_per;
    printf("enter cp: ");
    scanf("%d",&cp);
    printf("enter sp: ");
    scanf("%d",&sp);

    if(cp>sp)
    {
        loss = cp - sp;
        loss_per = (loss*100)/cp;
        printf("loss=%d\n",loss);
        printf("loss percentage=%f\n",(float) loss_per);
    }
    if(sp>cp)
    {
        profit = sp - cp;
        profit_per = (profit*100)/cp;
        printf("profit=%d\n",profit);
        printf("profit percentage=%f\n",(float) profit_per);
    }
}
*/



                    //Q14 calculator
                    //soln:-
/*
#include<stdio.h>
int main()
{
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
            printf("%d",a/b);
            break;
        }
        case'%':
        {
            printf("%d",a%b);
            break;
        }
        default:
        printf("invalid");
        break;
    }
}
*/



                    //Q12         searching element of an array
                    //Soln:-
/*
#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int arr[i];
    for(int j=0; j<i; j++)
    {
        scanf("%d",&arr[j]);
    }
    
    //printing the array after taking input 
    // for(int j=0; j<i; j++)
    // {
    //     printf("%d ",arr[j]);
    // }
    
    int e;
    scanf("%d",&e);
    int flag = 0;
    for(int k=0; k<i; k++)
    {
        if(e == arr[k])
        {
           flag++;
           i=k;
           break;
        }
    }
    if(flag != 0)
    {
        printf("Element found at [%d] location",i);
    }
    else
    {
        printf("Element not found");
    }
}
*/



               //Q7 :- perfect num(sum of divisors)
               //Soln :-
/*
#include<stdio.h>
int main()
{
   int num,sum = 0;
   scanf("%d",&num);
   for(int i=1; i<num; i++)
   {
       if(num%i == 0)
       {
           sum = sum + i;               //sum of all divisors
       }
   }
   if(sum==num)
   {
       printf("%d is a perfect number",num);
   }
   else
   {
       printf("%d is not a perfect number",num);
   }
}
*/


                               //Q13:- Finding 2nd largest element of array
                               //Soln
/*
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("second largest no.=%d",arr[1]);
    return 0;
}
*/




                                         //swapping  Qs
/*                                        
#include <stdio.h>
int main()
{
double firstNumber, secondNumber, temporaryVariable;
printf("Enter first number: ");
scanf("%lf", &firstNumber);
printf("Enter second number: ");
scanf("%lf",&secondNumber);
temporaryVariable = firstNumber;
firstNumber = secondNumber;
secondNumber = temporaryVariable;
printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
printf("After swapping, secondNumber = %.2lf\n", secondNumber);
printf("After swapping, temp = %.2lf", temporaryVariable);
return 0;
}
*/







                                        //Q. counting occurance of letter in known string(word)
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char s[50]="bobby";
        int b=0;
        int o=0;
        int y=0;
    for(int i=0; i<50; i++)
    {
        if(s[i]=='b')
        {
            b++;
        }

        if(s[i]=='o')
        {
            o++;
        }

        if(s[i]=='y')
        {
            y++;
        }
    }
    printf("b = %d\n",b);
    printf("o = %d\n",o);
    printf("y = %d\n",y);
    return 0;
}
*/


                    // Q4 :- TO READ LINE AND COUNT OCCURANCE OF PARTICULAR WORD(input given by user)
                    // Soln:-   we can also use strlen also to make it easier
/*
#include<stdio.h>
int main()
{
    char word[20];
    scanf("%s",word);              //For String don't use & operator to scan
    int count;
    int i=0;
    int flag;                       //to count for 1st time occuring ex:- milind it will give count of 1st i only 
    while(word[i] != '\0'){
        count = 0;
        flag = 0;
        int j = 0;
        while(word[j] != '\0'){
            if(word[i]==word[j]){
                count++;
            }
            j++;
        }
        for(int k=0; k<i; k++){
            if(word[i] == word[k])
            {   
                flag++;
            }
        }
        if(flag == 0){
            printf("%c -> %d\n",word[i],count);
        }
        i++;
    }
    return 0;
}
*/
