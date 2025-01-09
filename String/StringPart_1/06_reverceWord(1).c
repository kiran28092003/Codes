#include<stdio.h>
void main()
{
    int i=0,j=0;
    char str[100];
    printf("Enter String:");
    fgets(str,sizeof(str),stdin);

    while(str[i] != '\0')
    {
        while(str[i] != ' ' && str[i] != '\n')
        {
            i++;
        }
        j = i - 1;
        printf("Reverse String is:");
        while(j >= 0 && str[j] != ' ')
        {
            printf("%c",str[j]);
            j--;
        }
        i++;
    }
}