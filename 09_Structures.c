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

    printf("the name is %s & age is %d",ptr->name,ptr->age);          //just like this-> of OOPS
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
