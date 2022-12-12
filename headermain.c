//we can't include the user defined header file in <> bracket bcz if we include any file in <> bracket preprocessor search that file in the compiler specified path only so include it within "" 

// but we include any file within " " this preprosser search that header file in the current directory first and if not get then search that file in the compiler specifiled path
//we can include user defined header file as well as inbuilt header file within " ".
#include "header.h"   //header file

int main()
{
    int c =0;
    struct Demo obj;
    obj.i = 10;
    obj.f =13.24;
    printf("Value of i is:%d \n",obj.i);
    printf("Value of j is:%d \n",obj.f);
    printf("size of Demo is :%d\n",sizeof(struct Demo));
    printf("Value of no is:%d \n",no);

    c = DOZEN +10;  //as DOZEN is macro it's value gets replaced in the program. 
    printf("Value of c is: %d\n",c);
    return 0;
}