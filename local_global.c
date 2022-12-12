#include<stdio.h>
// I and j are the global variables
int I=10;  //memory gets allocated in non-bss section
int j;   //memory gets allocated in bss section, being global default value 0 gets allocated
void Demo(int no)
{
    int A=20;  //as being local variables memory gets allocated in the stack frame
}
void Hello()
{
    static int x=10;  //as it being local static memory gets allocated in static segment
    int x=10;
}
int main()
{
    int A=30;  //memory in stack frame
    int B; //in stack frame, garbage value gets allocate
    return 0;
}