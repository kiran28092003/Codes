#include<stdio.h>
#define MAX_SIZE 100
int main() 
{
    int index, evenIndex, oddIndex, numElements, temp;
    int i_arr[MAX_SIZE];
    printf("How Many Elements Do You Want To Enter In Array : \n");
    scanf("%d", &numElements);
    
    for(index = 0; index < numElements; index++)
    {
        scanf("%d", &i_arr[index]);
    }

    evenIndex = 0; 
    oddIndex = numElements - 1;

    while(evenIndex < oddIndex)
    {
        while(i_arr[evenIndex] % 2 == 0) // even condn
        {
            evenIndex++;
        }
        while(i_arr[oddIndex] % 2 != 0) // odd condn
        {
            oddIndex--;
        }
        if(evenIndex < oddIndex) // swapping
        {
            temp = i_arr[evenIndex];
            i_arr[evenIndex] = i_arr[oddIndex]; 
            i_arr[oddIndex] = temp;
        }
    }

    // printing Sorted Array (Even Odd Partition)
    for(index = 0; index < numElements; index++)
    {
        printf("%d ", i_arr[index]);
    }

    return 0;
}