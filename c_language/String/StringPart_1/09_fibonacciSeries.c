//10.Write a C program to print all Fibonacci series up to each ASCII code of alphabets in given string.
#include<stdio.h>
void main() 
{
    int index, n1, n2, n3;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Fibonacci series...\n");
    index = 0;
    while(sentence[index] != '\n')
    {
        // To skip space
        while(sentence[index] == ' ')
        {
            index++;
        }

        n1 = 0;
        n2 = 1;
        
        printf("Upto '%c' (%d) --> ", sentence[index], sentence[index]);
        printf("%d %d ", n1, n2);

        while((n3 = n1 + n2) <= sentence[index])
        {
            printf("%d ", n3);
            n1 = n2;
            n2 = n3;
        }
        printf("\n");
        index++;
    }
}