//inside structure we can create another structure called as nested structure
//there are 2 ways in which we can do this

// we cannot create object of same structure inside the structure.

#include<stdio.h>
//1: in this step we have make 2 structures separatly and make object of outer structure into inner structure.so first memory will allocate to hello and then to demo
struct Demo  //Inner structure
{
    int i;
    float j;
    
};
struct Hello  //outer structure
{
    int no;
    float f;
    struct Demo dobj; //object of inner struc.
};

//2: In this case we are declaring and creating the object of inner structure inside the outer sturct. immegiatly.
struct fun
{
    int p;
    float q;
    struct gun
    {
        int r;
        float s;
    }gobj;  //compulsory to crate object of this struct immegiatly.
    
};

int main()
{
    //creating the object and initializing the members of 1st case
    struct Hello hobj;
    hobj.no = 20;
    hobj.f = 11.11;
    hobj.dobj.i =21;
    hobj.dobj.j =23.12;

    //creating the object and initializing the members of 2nd case
    struct fun fobj;
    fobj.p=51;
    fobj.q = 101;
    fobj.gobj.r =121;
    fobj.gobj.s = 151;


    return 0;
}
