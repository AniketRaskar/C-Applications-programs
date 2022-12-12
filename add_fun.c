#include<stdio.h>

// Gharakhalacha dukan
int Addition(int No1, int No2)      // Function Defination   //No1,No2 are arguments of addition function
{   // Block chi surwat
    int Ans = 0;                        // Local variable of Addition
    Ans = No1 + No2;               // Berij keli by ALU

    return Ans;                         // Jyane call kela tyala value dya
}   // Block cha shewat

// Apala ghar
int main()                              // Ithun program run hoto,entry point fun
{   // Block chi surwat
    // Local variables of main
    int A = 10, B = 11, C = 0;

    // C mhanaje rikami pishawi
    C = Addition(A,B);             // Function call  // A & B are parameters
    printf("%d",C);                  // Gharachyanna bolun sanga kay zala te

    return 0;                           // OS la kalawa ki sagala nit zala
}   // Block cha shewat