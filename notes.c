//                               'C' NOTES BY KUMAR MILIND 
                                       
                                       
                                                                                                         
                                            
                                       
                                       
                                       //PAT QUESTIONS:-
/*    
    1. Q10 at line 633
    2. Q8  at line 671
    3. Q4  at line 738
    4. Q5 at line 759
    5. Q9  at line 795
    6. Q14 at line 826
    7. Q12 at line 875
    8. Q7  at line 919
    9. Q13 at line 947
*/ 

                                         
                                         
                                         // shortcuts:-
/*
   1. shift + opt + up/down -- copy paste same line above or below
   2. select all lines to be commented then press cmnd + /
   3. \n -- newline
   4. opt + cmnd + up/down -- multiple cursor above or below in same row
   5. opt + touch trackpad anywhere to place multiple cursor
   6. shift + cmd + p -- to find different shortcuts
   7. cmnd + l -- select whole line at once
   8. caps on + up/down -- selected word to upper or lower case
   9. opt + up/down -- to displace the line above or below
*/


                                         // DOUBTS -:
/* 
   1. line 420.
   3. float avg in def function coming 2.0000 instead of 2.50000 (line 507)
   4. how to print array by taking elements from users like we use to do for list in python.
   5. short hand if else for character or string to print statements.
   6. pointer to a pointer (assign a pointer to locate another pointer)
   7. passing array as a funct
   8. HTML PARSER
   9. Call by reference & Call by value
*/



                                        // 1st program
/*
#include<stdio.h>
int main()
{
    printf("Hello! Milind, let's start learning 'C' ");
    return 0;
}
*/



                             // Different type of variables & their size
/*
#include<stdio.h>
int main()
{
    int a = 4;
    
    unsigned long int b = 567;
    unsigned short int c = 56;

    long int d = -5;
    long int e = 345678;
    short int f = -6;
    short int g = 34;

    float h = 4.5;
    double i = 4.55;
    long double j = 4.6789;

    char k = 'm';
    unsigned char l = 'm';
    

    printf("%d\n",a);
    printf("%lu\n",b);
    printf("%hu\n",c);
    printf("%lu\n",d);
    printf("%lu\n",e);
    printf("%hu\n",f);
    printf("%hu\n",g);
    printf("%f\n",h);
    printf("%f\n",i);
    printf("%Lf\n",j);
    printf("%c\n",k);
    printf("%c\n",l);


    printf("\n\n");

    printf("size of int a is:-\n");
    printf("%lu\n",sizeof(int));
    printf("%lu\n\n",sizeof(a));
    
    printf("size of unsigned long int b is:-\n");
    printf("%lu\n",sizeof(unsigned long int));
    printf("%lu\n\n",sizeof(b));

    printf("size of unsigned short int c is:-\n");
    printf("%lu\n",sizeof(unsigned short));
    printf("%lu\n\n",sizeof(c));

    printf("size of long int d is:-\n");
    printf("%lu\n",sizeof(long));
    printf("%lu\n\n",sizeof(d));

    printf("size of long int e is:-\n");
    printf("%lu\n",sizeof(long));
    printf("%lu\n\n",sizeof(e));

    printf("size of short int f is:-\n");
    printf("%lu\n",sizeof(short));
    printf("%lu\n\n",sizeof(f));

    printf("size of short int g is:-\n");
    printf("%lu\n",sizeof(short));
    printf("%lu\n\n",sizeof(g));

    printf("size of float h is:-\n");
    printf("%lu\n",sizeof(float));
    printf("%lu\n\n",sizeof(h));

    printf("size of double i is:-\n");
    printf("%lu\n",sizeof(double));
    printf("%lu\n\n",sizeof(i));

    printf("size of long double j is:-\n");
    printf("%lu\n",sizeof(long double));
    printf("%lu\n\n",sizeof(j));

    printf("size of character k is:-\n");
    printf("%lu\n",sizeof(char));
    printf("%lu\n\n",sizeof(k));

    printf("size of unsigned character l is:-\n");
    printf("%lu\n",sizeof(char));
    printf("%lu\n",sizeof(l));

}
*/



                            // Declaration & Initialisation of variables 
/*
#include<stdio.h>
int main()
{
    int a;    //variable declaration 
    a = 78;   // variable initialization
    printf("%d",a);
    int b = 45;  // variable (declaration + initialization)
    printf("\n%d",b);
    printf("\n");
}
*/



                                       // Constant Function
/*
#include<stdio.h>
int main()
{
    int a = 6;
    a = 9;            // A new value assigned to a
    const int b = 5;
    // b = 7;          // This can't be changed as constant function is applied
    printf("%d",a);
    printf("\n%d",b);
}
*/



                                           // OPERATORS
 
   //   1. Arithematic Operators  
/*
#include<stdio.h>
int main()
{
    int A = 7, B = 2;
    float C = 7.0, D = 2.0;
    printf("The SUM of two int A and B is %d\n",A+B );
    printf("The DIFFERENCE of two int A and B is %d\n",A-B );
    printf("The PRODUCT of two int A and B is %d\n",A*B );
    printf("The DIVISION of two int A and B is %d\n",A/B );
    printf("The DIVISION of two floating num C and D is %f\n",C/D );
// To get in Division result in decimal we need to take floating inputs
    
    printf("the remainder of two int A and B is %d\n",A%B);
    // printf("the remainder of two floating int is %f\n",C%D);
// remainder operator don't work for floating integer.


                         // INCREAMENTAL & DECREMENTAL ARITHEMATIC OPERATORS

    // printf("the INCREMENTAL result of B is %d \n",B++);       //(B++ means to print original value of B and increase it's value by 1)
    // printf("the changed value of B is %d \n",B);          
    // printf("the INCREMENTAL result of B is %d \n",++B);    //(++B means to increase the value of B and then print the increased value of B)

    // printf("\nthe DECREMENTAL result of A is %d \n",-A);   //(single - in starting just add negative sign to the number)
    // printf("the DECREMENTAL result of A is %d \n",A--);    // (-- After A variable increase the value and print the increased value)
    // printf("the changed value of A is %d \n",A);
    // printf("the DECREMENTAL result of A is %d \n",--A);   // (-- before A variable decrease the value and print the decreased value)
    // printf("the final value of A is %d \n",A);   
}
*/



   //   2. Relational Operators (==, <, >, !=, =<, =>)
/*
#include<stdio.h>
int main()
{
    int a = 5, b = 6;
    if (a!= b)
    {
        printf("true\n");
    }

    printf("%d\n", a!=b);  // 1 means true
    printf("%d\n", a==b);  // 0 means false
    printf("%d\n", a>b);   // 0 means false
    printf("%d\n", a<b);   // 1 means true
    //printf("%d\n", ab)
}
*/



   //   3. Logical Operators (TRUTH TABLE)
/*
#include<stdio.h>
int main()
{
    int h = 0, j = 1;
    printf("The logical operator returns %d\n", h && j);         // 0 And 1 = 0   (AND --> *)
    printf("The logical operator returns %d\n", h || j);         // 0 or 1 = 1    (OR --> +)
    printf("The logical operator returns %d\n", !j);             // Not of 1 is 0
    printf("The locigal operator returns %d\n", !h);             // Not of 0 is 1
    printf("The locigal operator returns %d\n", !(h&&j));        // NAND of 0 & 1 is 1  
    printf("The locigal operator returns %d\n", !(h||j));        // NOR of 0 & 1 is 0 


    return 0;
}
*/



   //   4. Bitwise Operators (Boolean Algebra)
/*
                                          // A = 60   B = 13
                                          // A = 00111100 (Binary of '60')
                                          // B = 00001101 (Binary of '13')
                                          // R = 00001100 (Binary of '12')
#include<stdio.h>
int main()
{
    int A = 60, B = 13;
    printf("Bitwise and operator returns %d\n", A&B);
    printf("Bitwise or operator returns %d\n", A|B);
    printf("Bitwise xor operator returns %d\n", A^B);
    printf("Bitwise ones complement operator returns %d\n", ~B);
    printf("Bitwise ones complement operator returns %d\n", ~A);
    printf("Bitwise left shift operator returns %d\n", A<<B);       //left shift each bit of the left-hand operand 'A' by the num of position indicated by right-hand operand 'B'.
    printf("Bitwise right shift operator returns %d\n", A>>B);      //left shift each bit of the left-hand operand 'A' by the num of position indicated by right-hand operand 'B'.
    return 0;
}
*/



   //   5. Assignment Operators (==, +=, -=, *=, %=)
/*
#include<stdio.h>
int main()
{
    int M = 9;
    int N;
 // int O;   UN-USABLE gives ERROR
    int P;
    int Q;
    int R;
    N += M;
 // O == M;   UN-USABLE gives ERROR
    P *= M;
    Q -= M;
    R %= M;
    
     printf("Value of N is %d\n", N);
 //  printf("Value of O is %d\n", O);   UN-USABLE gives ERROR
     printf("Value of P is %d\n", P);
     printf("Value of Q is %d\n", Q);
     printf("Value of R is %d\n", R);

    
    
    int A = M+=8;
    int B = M-=8;
    int C = M*=8;
    int D = M%=8;

     printf("\n\nValue of A is %d\n", A);
     printf("Value of B is %d\n", B);
     printf("Value of C is %d\n", C);
     printf("Value of D is %d\n", D);
    

   
    // M +=8; // Adding 8 in old value of M gives 17
    // M ==8; // UN-USABLE gives ERROR
    // M -=8; // subtracting 8 from old value of M gives 1
    // M *=8; // multiplying 8 with old value of M returns 72 as new value of M
    // M %=8; // divide old value of M with 8 returns remainder 1

    //  printf("\n\n value of M is %d\n", M);
    return 0;
}
*/



    //  6. MISC OPERATORS
/*
    &  --  Returns Address
    *  --  Returns Value at some address (POINTER)
    ?: --  Conditional Statement 
*/



                                   // Unknown User Input
/*           
                 // will take only 2 at a time either (chr & int) or (chr & float)  or (int & float)                       
#include<stdio.h>
int main()
{
    int i;
    printf("please enter your desired integer:-");
    scanf("%d", &i);
    printf("\nyou have entered %d as value of i",i);

    char c;
    printf("\n\nplease enter your desired character:-");
    scanf("%c", &c);
    printf("\nyou have entered %c as value of c",c);

    float f;
    printf("\n\nplease entered your desired floating number:-");
    scanf("%f", &f);
    printf("\nyou have entered %f as value of f",f);
    
    return 0;
}
*/



                                           //TYPECASTING
/*
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("enter num1:");
    scanf("%d",&num1);          // as we have user input is integer so scanf will have %d
    printf("\n enter num2:");
    scanf("%d",&num2);         // as we have user input is integer so scanf will have %d

    printf("\nthe division of num1 and num2 is %d\n",num1/num2);
    printf("the original division of num1 and num2 is %f", (float) num1/num2);
}
*/





                                         // conditional statements
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
        printf("lund chala lo mera");
    }
    else if(age>70)
    {
        printf("gand k andhe dikhayi dega tujhe");
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


/*                          METH 2 :- using remainder concept(Reversing digits of a number)
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



                                //STRING
/*                                  
#include<stdio.h>
int main()
{
    char m[40];
    printf("enter ur word");         //will take words only not sentence (space should be excluded)
    scanf("%s",m);
    printf("%s",m);
}
*/



                               // userinput as sentence(words with space)
/*
#include<stdio.h>
int main()
{
    char word[40];
    //scanf("%s",word);
    gets(word);
    //printf("%s",word);
    puts(word);
    return 0;
}   
*/



                         //STRING :- Immutable


                                      //initializing string                           
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    char c[50] = "Kumar Milind";                                                //have to declare & initialize in same line
    char C[50] = {'M','i','l','i','n','d',' ','K','u','m','a','r','\0'};        //have to put '\0' null character at end when initializing like this
    printf("%s\n",c); 
    printf("%s\n",C);
    puts(C);
    return 0;
}
*/



                                    //taking string as user input     using gets & puts
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    
    char c[50];                                 //have to put 1 size bigger character array than string need to be inputed that 1 size will be utilized by null character    
    printf("Enter your sentence as C\n");
    gets(c);                                    //can accept sentence also(words with gap)

    char b[50]; 
    printf("Enter your word as B\n");
    scanf("%s",b);                              //can't scan gaps      no need to use & for scanning strings


    printf("your entered strings are:\n");
    puts(c);
    printf("%s\n",c);       //can use printf & puts both even user input taken through gets function.

    puts(b);
    printf("%s",b);        //using printf we can print sentence or word both but sentence can't be scanned by scanf.
    
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




                            //Function of string
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
                                                //cancatenation of string     using "strcat()"
    char a[50] = "Milind";
    char b[50] = " Kumar Singh";
    puts(strcat(a,b));                          //after this string "a" is changed to "Milind Kumar Singh" but "b" will remain same as "Kumar Singh".
    strcat(a, " is bad guy");
    puts(a);
    printf("\n");



                                                //copying string into another    using "strcpy()"
    char c[50];
    char d[50] = " but have good heart";
    //char c[50] = strcat(a,d);                 //can't be done like this
    strcpy(c,strcat(a,d));
    puts(c);
    printf("\n");

    // char e[50];                   
    // strcpy(e,strcat(c,"and dull mind"));          //NOT WORKING   CHECK!!!
    // puts(e);
    // printf("\n");


    // char f[50] = "Ajay";
    // char g[50] = "Raj";
    // char h[50];                                      //can't use operators on string
    // h = f + g;                          
    // puts(h);




                                           //LENGTH OF STRING using "strlen()"

    char i[50] = "aandvind";
    char j[50] = "singh shekhawat";     //space will be counted too
    char k[50] = "chutiya";

    printf("length of stirng 'i' is %lu:\n",strlen(i));       //doesn't counts null character                               
    printf("length of stirng 'j' is %lu:\n",strlen(j));                                  
    //printf("length of stirng 'k' is %lu:\n",k.strlen());             //can't be done like this as used to do in python                        
    printf("\n");




                                         //reversing a string using strrev()

    // char l[50] = "adwal";
    // puts(strrev(l));                      //not working in this, code is correct
    // printf("\n");
                                         

                                         
                                         
                                         // comparing string using strcmp()    either gives ascii diff or just give +1/0/-1
    char m[50] = "arjun";
    char p[50] = "arjun";
    char n[50] = "piyush";
    char o[50] = "R";    
    char q[50] = "r";    

    printf("%d\n",strcmp(m,p));         //give 0 for same string                           
    printf("%d\n",strcmp(m,n));        //giving ascii diff                             
    printf("%d\n",strcmp(m,o));                                     
    printf("%d\n",strcmp(o,q));                                     
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



                                                //STRUCTURES
/*                                    
#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int age;
};  

int main()
{
    struct person p;
    struct person p2 = {"ankit mishra",32};         //initialising values like this 

   // p.name = "kumar milind";                      //can't do like this for strings
    strcpy(p.name,"kumar milind");
    p.age =  21;

//Taking user input
    struct person p3;
    //scanf("%s",p3.name);
    gets(p3.name);
    scanf("%d",&p3.age);

    printf("the name is %s & age is %d\n",p.name,p.age);
    printf("the name is %s & age is %d\n",p2.name,p2.age);
    printf("the name is %s & age is %d",p3.name,p3.age); 
}
*/



                                                    //POINTER IN STRUCTURE
/*
#include<stdio.h>
#include<string.h>
struct person
{
    char name[50];
    int age;
};  

int main()
{
    struct person p = {"kumar milind",21};
    struct person* ptr;
    ptr = &p;

    printf("the name is %s & age is %d",ptr->name,ptr->age);          //just like THIS "->" of OOPS
    //printf("the name is %s & age is %d",*(ptr).name,*(ptr).age);      //can't be done like this
}                                                     
*/



                                                // ARRAY IN STRUCTURE
/*
#include<stdio.h>
#include<string.h>
typedef struct persons
{
    char name[20];             //using typedef have given a short name to struct persons as per
    int age;
} per;


int main()
{
    per p[10];                          //struct persons p[10] ~ per p[10]   shortened using typedef
     for(int i=0; i<10; i++)
    {
        printf("Enter the name:\n");
        scanf("%s",p[i].name);
        printf("Enter the age:\n");
        scanf("%d",&p[i].age);
    }
    for(int i=0; i<10; i++)
    {
        printf("The name of %d th person is %s and his age is %d\n",i,p[i].name,p[i].age);
    }
}                           
*/



                             //  COPYING VALUE OF 1 STRUC TO ANOTHER
/*
#include<stdio.h>
#include<string.h>
struct employee
{
    char name[10];
    int age;
    float salary;
};

int main()
{
struct employee e1= {"sanjay", 30, 5500.50};
struct employee e2;

    e2 = e1;                        // copy everything at one go including name(string)
    //e2.name = e1.name;              //won't work for copying name as it's string 
    //strcpy(e2.name,e1.name);
    //e2.age = e1.age;
    //e2.salary = e1.salary;

    printf("the name is %s, age is %d, & salary %f\n",e2.name,e2.age, e2.salary);
    printf("the name is %s, age is %d, & salary %f",e1.name,e1.age, e1.salary);
}
*/



                                            
                                            
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



                                    //INCREASING SIZE OF ARRAY BY REALLOC
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





/*
                                        //HTML PARSER

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void parser(char * string)
{
    int flag = 0;
    int index = 0;
    int i;
    for(i=0; i<strlen(string); i++)
    {
        if(string[i]== '<')
        {
            flag = 1;
            continue;
        }

        else if(string[i]== '>')
        {
            flag = 0;
            continue;
        }



        if(flag == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index]= '\0';

    
    //remove trailing spaces from the begining
    while(string[0] == ' ')
    {
        for(i=0; i<strlen(string); i++)
        {
            string[i] = string[i+1];
        }
    }

    //remove trailing spaces from the end
    while(string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }

}

int main()
{
    char string1[] = "<h1>   Heyy Milind  </h1>";
    char string2[] = "<harry>   How r u?     </h2>   ";
    parser(string1);
    parser(string2);
    printf("%s\n",string1);
    printf("%s",string2);
    return 0;
}
*/                                                  


// #include<stdio.h>
// #include<string.h>
// #include<math.h>
// #include<stdlib.h>
// int main()
// {
//     printf("hell ya");
//     return 0;
// }