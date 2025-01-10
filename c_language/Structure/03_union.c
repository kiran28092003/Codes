#include<stdio.h> 

void main() 
{
    union Demo
    {
        int a;
        char b;
        double c;     // size : 8 byte (union la saglyt mothy datatype chi jaga milti)
        short int d;   
    };

    union Demo obj; //object(obj) 

    // printf("Size Of Object 'obj' : %d\n\n", sizeof(obj));

    obj.a = 100000;
    obj.b = 'A';
    obj.c = 3.2;
    obj.d = 50;

    // 1
    // printf("valud of obj.a : %d\n", obj.a);
    // printf("valud of obj.b : %c\n", obj.b);
    // printf("valud of obj.c : %lf\n", obj.c);
    // printf("valud of obj.d : %d\n", obj.d);


    // 2
    printf("valud of obj.a : %p\n", &obj.a);
    printf("valud of obj.b : %p\n", &obj.b);
    printf("valud of obj.c : %p\n", &obj.c); 
    printf("valud of obj.d : %p\n", &obj.d);
}


// output : 
// C:Structure>a

// valud of obj.a : 000000000061FE18
// valud of obj.b : 000000000061FE18 // for union all has same addresses
// valud of obj.c : 000000000061FE18
// valud of obj.d : 000000000061FE18

// C:Structure>gcc 03_union.c

// C:Structure>a
// valud of obj.a : 000000000061FE00
// valud of obj.b : 000000000061FE04 // for structure all different addresses
// valud of obj.c : 000000000061FE08
// valud of obj.d : 000000000061FE10