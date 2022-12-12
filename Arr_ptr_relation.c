#include <stdio.h>
//Array is internaly considered as a pointer
//when we access any element of the array we use array subscript operator,which is internally considered as correspoinding pointer representation

//this are are the possible ways in which we can access the elements in array
int main()
{
    int Arr[5]={10,20,30,40,50};
    printf("Value at Arr[3] is %d:\n",Arr[2]);
    printf("Value at Arr[3] is %d:\n",*(Arr+2));
    printf("Value at Arr[3] is %d:\n",*(2+Arr));
    printf("Value at Arr[3] is %d:\n",(2[Arr]));
    return 0;
}