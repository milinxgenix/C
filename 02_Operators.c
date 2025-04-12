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
