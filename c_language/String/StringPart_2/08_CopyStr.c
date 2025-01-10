// 9.Write a C program which accept string from user and copy that string into some another string.
#include<stdio.h>
void main()
{
    int index;
    char name[100], copyName[100];
    printf("Enter Name : \n");
    fgets(name, sizeof(name), stdin);

    index = 0;
    while(name[index] != '\0')
    {
        copyName[index] = name[index];
        index++;
    }
    printf("Copy String : %s\n", copyName);
}