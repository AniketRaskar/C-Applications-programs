#include<stdio.h>
//Due to static storage class value of the variable gets preserved
//hence when we call first Demo, value of b becomes 21 and it gets stored, later on when we call b in second method it's value becomes 22.
void Demo()
{
    auto int a=10;
    static int b=20;
    a = a+1;
    b = b+1;
    printf(" Value of a is: %d \n",a);
    printf("Value of b is:%d \n",b);
}
int main()
{
    printf("Inside main...\n");
    Demo();  // 11  21
    Demo();  //11 22

}