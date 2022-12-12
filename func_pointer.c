#include<stdio.h>
//Function pointer is a pointer which points to the specific function
//in case of function pointer insead the fetching address we can call the specific function.
int Addition(int a,int b)
{
    int iAns =0;
    int iSum=0;
    iSum = a+b;
    return iSum;

}
int main()
{
    int a=10,b=20;
    int iRet =0;
    //iRet = Addition(a,b);
    int (*fptr)(int ,int);  //Creation of function pointer
    fptr = Addition;        // assigning that pointer to the specific function
    printf("Address of addition function is :%d\n",fptr);  //or can be fptr

    iRet = fptr(a,b);  //calling the function using pointer
    printf("Addition is %d\n",iRet);
    

    return 0;
}