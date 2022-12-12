#include <stdio.h>
int addition(int ,int);  //Declaration of the function, which includes name of the function, return type, and data type of the aruguments
int main()
{
    int A=10;
    int B=20;
    int iRet=0;
    iRet =addition(A,B);
    printf("addition is: %d \n",iRet);
    return 0;
}
int addition(int iValue1,int iValue2)
{
    int iAns=0;
    iAns = iValue1+iValue2;
    return iAns;
}