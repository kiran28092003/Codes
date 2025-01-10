#include<stdio.h>
#define  Max_Size 100
int main()
{
    int index, numElements, sum = 0;
    int i_arr[Max_Size];
    printf("How Many Element To Be Entered Inside Array : ");
    scanf("%d", &numElements);
    for(index = 0; index < numElements; index++)
    {
        scanf("%d", &i_arr[index]);
    }
 
    // Calculating Sum 
    for(index = 0; index < numElements; index++)
    {
        sum += i_arr[index];
    }

    // prints N + N + N + ... + n Formate (Where N = Arr_Ele)
    
    for(index = 0; index < numElements; index++)
    {
        printf("%d ", i_arr[index]);

        if(index != numElements - 1)
        {
            printf("+ ");
        }
        else{
            printf("= %d\n", sum);
        }
    }
    return 0;
}