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
