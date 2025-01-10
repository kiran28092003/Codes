// #include<stdio.h>
// void main()
// {
//     int index, lastIndex;
//     char strArr[100];
//     printf("Enter String :\n");
//     fgets(strArr, sizeof(strArr), stdin);
    
//     // Searching '\n' Index
//     index = 0;
//     while(strArr[index] != '\n' && strArr[index] != '\0')
//     {
//         index++;
//     }

//     lastIndex = index - 1;
    
//     // Printing reversed string
//     for(index = lastIndex ; index >= 0 ; index--)
//     {
//         printf("%c", strArr[index]);
//     }
// }


#include<stdio.h>
void main() 
{
    int index, head, tail, temp;
    char sentence[100];
    printf("Enter String : \n");
    fgets(sentence, sizeof(sentence), stdin);

    tail = 0;
    while(sentence[tail] != '\n') 
    {
        tail++;
    }


    head = 0;
    tail--;

    while(tail > head) 
    {  
        temp = sentence[tail];
        sentence[tail] = sentence[head];
        sentence[head] = temp;
        
        head++;
        tail--;
    }

    printf("%s", sentence);
}