//its a trying code...try runnable code here first and then commit
#include<stdio.h>
void main()
{
    int i;
    char carr[100];
    printf("Enter String : \n");
    fgets(carr, sizeof(carr), stdin);

    i = 0;
    while(carr[i] != '\n')
    {
        while(carr[i] == ' ')
        {
            i++;
        }
        while(carr[i] != ' ' && carr[i] != '\n')
        {
            printf("%c", carr[i]);
            if(carr[i + 1] == ' ')
            {
                printf("%c", ' ');
            }
            i++;
        }
        if(carr[i] == '\n')
        {
            break;
        }
        i++;
    }
}
