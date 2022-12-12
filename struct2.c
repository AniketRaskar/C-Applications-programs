//inside the structure we can create an array;
//inside the structure we can create the pointer 

//inside the structure we cannot define only function but in OOP inside class we can define it.

#include <stdio.h>
struct Demo
{
    int Arr[4];
    float Brr[3];
};
struct Hello
{
    int *p;
    float *f;
};
int main()
{
    struct Demo obj;
    obj.Arr[0]=10;  //initialising the members of structure
    obj.Brr[2]=20.13;

    struct Hello hobj;
    //initialising the pointer in hello ie. by giving the address to the pointer.
    int no = 10;
    float ab = 13.23;
    hobj.p = &no;
    hobj.f = &ab;

    printf("%d\n",hobj.p);
    printf("%d\n",hobj.f);
    return 0;
}