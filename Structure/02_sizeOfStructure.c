#include<stdio.h>

#pragma pack(1) // packing of 1 byte is recommended to avoid any sort of packing 

void main() 
{
    struct Demo // datatype
    {
        // double a;
        // short int b;
        // int d;        // After #pragma pack(1) : 23  after pack(2) : 24
        // char c;
        // double e;

        int a;
        char b;          // After #pragma pack(1) : 10  after pack(2) : 12
        int c;  
        char d;

        // double a;
        // short int b;
        // int d;        // size : 32  (without pragma)
        // char c;
        // double e;

        // int a;
        // char b;      // size : 16   (without pragma)
        // int c;  
        // char d;
    };

    struct Demo obj;  // object(obj)
    
    printf("Size Of Object 'obj' : %d\n", sizeof(obj)); // padding concept
}