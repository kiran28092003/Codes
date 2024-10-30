// 6.Write a C program which accept string from user and then reverse the string till first N characters without taking another string.
#include<stdio.h>
void main() 
{
    int i, j, reverseNum;
    char string[100];
    printf("Enter String : \n");
    fgets(string, sizeof(string), stdin);

    printf("Enter First N Characters Which Should be Reversed ?\n");
    scanf("%d", &reverseNum);
    
    i = reverseNum;
    j =  reverseNum - 1;

    while(string[i] != '\n')
    {
        while(j >= 0) 
        {
            printf("%c", string[j]);
            j--;
        }
        printf("%c", string[i]);
        i++;
    }   
}