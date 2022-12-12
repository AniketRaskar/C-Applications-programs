//we can create constant object of a structure
//if we have created contant object of structure we have to use member initialisation list,and we can't modify once initialised.
#include <stdio.h>

struct Demo
{
    int i;
    float j;
};

int main()
{
    const struct Demo obj= {10,13.23};
    
    return 0;
}