#include <stdio.h>
//compiler allocates the memory in terms of 4 or 8 bytes, due to this memory gets wasted called as padding, to avoid this we use concept of pragma pack
struct Demo
{
    int i;
    float j;
    char no;
    //double d;  //when we include double for char size gets allocated in terms of 8 bytes
};
int main()
{
    struct Demo obj;
    printf("Size of demo is : %d\n",sizeof(obj));  //12
    //due to padding it genrates the size of obj 12 bytes as char also 4 bytes, so it is memory loss.

    return 0;
}