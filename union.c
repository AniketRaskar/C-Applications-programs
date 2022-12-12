//Union is exactly same as structure execept memory allocation statergy, in case of union memory gets allocated for only largest element of the union, due to which we can initalize only one element at a time. 
//if we try to initialize more than one element at a time then memory gets allocated for last elemnent only

#include <stdio.h>

union Demo
{
    int i;
    float j;
    //double n;  //due to this size will be 8 bytes
};
int main()
{
    union Demo obj;
    printf("Size of union is :%d \n",sizeof(obj));  //4 bytes 
    obj.i=10;
    //obj.j=12.13;
    printf("Value of i is %d :\n",obj.i);
    //printf("Value of j is %d :\n",obj.j);   //gives segmentation fault due to multipal initiazation at a time
    return  0;
}