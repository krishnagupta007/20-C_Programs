#include<stdio.h>

void main()

{
    int arr1[3][3], arr2[3][3], result[3][3], i, j ;

    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Elements of Array: ");
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("ARRAY 1 \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t %d ", arr1[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Elements of Array : ");
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("ARRAY 2 \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t %d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("ADDITION \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {   
            result[i][j] = arr1[i][j] + arr2[i][j] ;
            printf("\t %d ", result[i][j]) ;
        }
        printf("\n");
    }
}