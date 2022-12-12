#include<stdio.h>
extern int no;  //by using this extern storage class we imports the value of variable from another file
//extern int d;  //as d is make static global in file storage1.c we can't access it.
int c=21;
void Demo()
{
    static int b =11;
    b++;
    printf("value of b is :%d \n",b);
    
}

int main()
{
    auto int a = 10;
    
    printf("value of a is:%d \n",a);
    Demo();
    Demo();

    printf("Value of c is :%d \n",c);
    // printf("Value of d is :%d \n",d);// accsing value in another file
    printf("Value of no is :%d \n",no);
    return 0;
}