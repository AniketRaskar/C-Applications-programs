#include <stdio.h>
#include <stdlib.h>
///malloc function
int main()
{
    int *mptr = NULL;
    int *cptr = NULL;
    int *rptr = NULL;
    int iSize =0;
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    //for malloc() we have to give single input parameter that is no of elements and make typecasting
    mptr = (int*)malloc(iSize * sizeof(int));

    free(mptr);  //return value of free function is void ,and input parameter address of memory which we want to free
    //for calloc function we have to give to give 2 parameters no of elements and size of each element ,sequence of parameters must be same . separated by comma

    cptr = (int*)calloc(5, sizeof(4));
    free(cptr);

    //realloc is used to reallocate the already allocated memory, it may be incresed or decresed.
    //for this we have to provide 2 parameters 1st is address of already allocated memory ie.mptr and 2nd is new size that you want to allocate. squence matters
    //jar table war 4 jan astil ani parat 2 ale tar weater 6 chairs cha table arrange karto ani nantr 3 gele tar 3 jan adjust kartat.
    rptr=(int*)realloc(mptr,7);

    //if we maake the 1st parater NULL then realloc function acts as a malloc function
    rptr=(int*)realloc(mptr,7);

    //if we make 2nd parameter ie.no of elements 0 then realloc acts as a free function. 
    rptr=(int*)realloc(mptr,7);
    //to avoid the confusion avoid this 2 flavours
   return 0;
}