//we can travel the string in below format
//as string ends with '\0' we can travel it upto '\0'

#include <stdio.h>

int main()
{
    char Arr[5] = "abcd";
    char * ptr = Arr;

    while(*ptr != '\0')
    {
        printf("%c\n",*ptr);
        *ptr++;
    }
    return 0;
}