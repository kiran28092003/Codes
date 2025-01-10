//Write a C program to create an array of n elements using static memory allocation to Find Union & Intersection of 2 arrays.
#include<stdio.h>
void main()
{
    int i, j, k, numElements1, numElements2, intersectionCount, unionCount, flag;
    int i_arr1[100], i_arr2[100], unionArr[200], intersectionArr[100];

    printf("How Many Elements Do You Want To Enter In Array 1 : \n");
    scanf("%d", &numElements1);
    printf("Enter Array 1 Elements : \n");
    for(i = 0 ; i < numElements1 ; i++)
    {
        scanf("%d", &i_arr1[i]);
    }


    printf("How Many Elements Do You Want To Enter In Array 2 : \n");
    scanf("%d", &numElements2);
    printf("Enter Array 2 Elements : \n");
    for(i = 0 ; i < numElements2 ; i++)
    {
        scanf("%d", &i_arr2[i]);
    }


    // Calculate union of two arrays
    
    for(i = 0 ; i < numElements1 ; i++)
    {
         // Copy elements from the first array to the union array
        unionArr[i] = i_arr1[i];

        if(i == (numElements1 - 1))
        {   
            unionCount = numElements1;

            for(j = 0 ; j < numElements2 ; j++)
            { 
                flag = 0;
                for(k = 0 ;  k < numElements1 ; k++) 
                {
                    if(i_arr2[j] == i_arr1[k])
                    {
                        flag++;
                    }  
                }
                if(flag == 0)
                {
                     // If the second array element is not found in the first array, add it to the union array and increment union count
                    unionArr[unionCount] = i_arr2[j];
                    unionCount++;
                }
            }
        }
    }

    printf("Union Array : \n");
    for(i = 0; i < unionCount ; i++)
    {
        printf("%d ", unionArr[i]);
    }


    // Calculate intersection of two arrays

    intersectionCount = 0;
    for(i = 0 ; i < numElements1 ; i++)
    {
        for(j = 0 ; j < numElements2 ; j++)
        {
            // Add the matching element to the intersection array and increment the intersection count           
            if(i_arr1[i] == i_arr2[j])
            {       
                intersectionArr[intersectionCount] = i_arr1[i];
                intersectionCount++;
            }
        }
    }

    printf("\nIntersection Array : \n");
    for(i = 0 ; i < intersectionCount ; i++)
    {
        printf("%d ", intersectionArr[i]);
    }

}