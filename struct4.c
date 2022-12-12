//we can create pointer of a same structure inside the structure called as self referntial structure.
// same as linked list.
#include <stdio.h>

struct Demo
{
    int i;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj1,obj2,obj3;
    struct Demo *p = &obj1;

    obj1.i = 11;
    obj1.ptr = &obj2;

    obj2.i=21;
    obj2.ptr=&obj3;

    obj3.i=51;
    obj3.ptr = NULL;

    return 0;
}