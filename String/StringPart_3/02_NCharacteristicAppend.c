
// 2.Write a C program which accept two strings from user and append N characters of second string after first string.
#include<stdio.h>
void main()
{
    int i, j, appendNum;
    char str1[200], str2[100];

    printf("Enter String1 : \n");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter String2 : \n");
    fgets(str2, sizeof(str2), stdin);

    printf("How Many Chars Of 2nd String Do You Want To Append Into First : \n");
    scanf("%d", &appendNum);

    i = 0;
    while(str1[i] != '\n')
    {
        i++;
    }

    j = 0;
    while(j < appendNum)
    {
        str1[i] = str2[j];
        if((j + 1) == appendNum - 1) 
        {
            str1[i + 1] = '\0';
        }
        i++;
        j++;
    }
    printf("%s", str1);
}
