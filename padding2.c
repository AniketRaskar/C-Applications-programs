//compiler allocates the memory in terms of 4 or 8 bytes, due to this memory gets wasted called as padding, to avoid this we use concept of pragma pack

#include <stdio.h>
#pragma pack(1)  //(x) this can be change
//due this pragma pack we says to the compiler that allocate the memory space in terms of 1 bytes
//if we make it (2) it give 10 bytes for below code  ie. 4,4,2

struct Demo
{
    int i;
    float j;
    char no;
   
};
int main()
{
    struct Demo obj;
    printf("Size of demo is : %d\n",sizeof(obj)); //9bytes
    
    return 0;
}