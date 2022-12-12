//ways for creating object of a structure
//ways of initialising members of a structure
//pointer pointing to the object of a strucure

#include <stdio.h>

struct str
    {
        int data;
        float no;
        char abc;
    }obj;  //creation of object of structure immagiately after the declaration

    struct str obj2;  //creation of object of structure after the declaration
int main()
{
    struct str obj = {20,20.43,'A'};  //member initialization by list

    //member intialisation by member by member
    obj2.data=10;
    obj2.no=30.43;
    obj2.abc='B';

    //creation of pointer to object of a structure

    struct str *p = &obj;   //p is a pointer which points to struct str and currently it holds the address of object obj,where str is structure which contains 3 elements first is int ,second is float, third is char.

    //if we have pointer we can initialize the elements of structure using indirect assesing operator(->)
    p -> data=40;
    p ->no = 20.11;
    p ->abc ='C';

    //Creating array of structure

    struct str Arr[4];
    //Arr is a one dmentional array which contains 4 homogenuos elements each element is of type struc str, where str is strucure which contains 3 elemets 1st is int,2nd is float, 3rd is char
    
    return 0;
}