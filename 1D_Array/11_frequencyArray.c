#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    int flag, freqCount, numElements, index, outerLoop, innerLoop, revCounter;
    int i_arr[MAX_SIZE];
    printf("How Many Elements Do You Want To Enter : \n");
    scanf("%d", &numElements);
    
    // For Taking Inputs
    
    for(index = 0; index < numElements; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    // Code For Counting Frequency Of Elements

    for(outerLoop = 0; outerLoop < numElements; outerLoop++)
    {   
        flag = 0;
        freqCount = 0;
        revCounter = outerLoop - 1;

        // This Avoid Repetition Of Frequency of Same Elements
        
        while(revCounter >= 0)
        {
            if(i_arr[revCounter] == i_arr[outerLoop])
            {
                flag = 1;
                break;
            }
            revCounter--;
        }
        if(flag == 1)
        {
            continue;
        }
        else
        {
        for(innerLoop = 0; innerLoop < numElements; innerLoop++)
        {
            if(i_arr[outerLoop] == i_arr[innerLoop])
            {
                freqCount++;
            }
        }
        printf("Frequency Of %d is %d\n", i_arr[outerLoop], freqCount);
        }
    }
    return 0;
}