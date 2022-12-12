//string in c&cpp is not any explicit data type it is the character array ending with '\0', as it is considered as a array we can apply all the concepts of array to the string
//in string we can store any data in the text format eg.student,city.etc.

// 2-ways of storing the data in the string
//1
char Arr[5] = {'a','b','c','d','\0'};
//2
char Brr[5] = "abcd"; //both the ways are same, and internally works same

#include <stdio.h>

int main()
{

    printf("Size of Arr is:%d\n",sizeof(Arr)); // 5 bytes as 4 char & 1 '\0\
    printf("Size of Arr is:%d\n",sizeof(Brr));  // 5 bytes
    return 0;
}