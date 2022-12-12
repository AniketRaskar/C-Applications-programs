//we can also create constant members of a structure
//we have created contant members of a structure then we have to use member initialization list,else it genrate error
#include <stdio.h>

struct Demo
{
    const int i;
    const float j;
};
int main()
{
    struct Demo obj = {10,12.22};
    //obj.i=20;   //error
    //obj.j=30.122;   //error
    return 0;
}