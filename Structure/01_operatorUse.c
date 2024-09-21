
#include<stdio.h>

    struct datatype
    {
        int a; 
        int b;
    };

void setValues(struct datatype*);

void main() 
{
    struct datatype object;

    setValues(&object);

    printf("object.a : %d object.b : %d\n", object.a, object.b);
}

void setValues(struct datatype* object)
{
    // (*object).a = 10;
    // (*object).b = 20;

    object -> a = 10;
    object -> b = 20;
    
    // printf("object.a : %d object.b : %d\n", (*object).a, (*object).b); // direct member accessing operator(.)
    printf("object.a : %d object.b : %d\n", object -> a, object -> b); // indirect member accessing operator(->)
}
