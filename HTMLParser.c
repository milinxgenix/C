
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