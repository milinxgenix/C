
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