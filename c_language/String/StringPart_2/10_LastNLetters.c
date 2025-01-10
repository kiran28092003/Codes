// 11.Write a C program which accept string from user and accept number N then copy last N character into some another string.
#include<stdio.h>
void main()
{
    int i, j, copyNum;
    char string1[100], string2[100];
    printf("Enter String : \n");
    fgets(string1, sizeof(string1), stdin);

    printf("How Many Chars To You Want To Copy From Last : \n");
    scanf("%d", &copyNum);

    i = 0;
    while(string1[i] != '\n')
    {
        i++;
    }

    while(copyNum >= 1) 
    {
        i--;
        copyNum--;
    }


    j = 0;
    while(string1[i] != '\0')
    {
        if(string1[i] != ' ')
        {
        string2[j] = string1[i];
        j++;
        }
        i++;
    }
    printf("%s\n", string2);
}