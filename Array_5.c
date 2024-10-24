/************************************************************************************************************

Write a program in C to count the total number of duplicate elements in an array.

The task involves writing a C program to count the number of duplicate elements in an array. 
The program will take a specified number of integer inputs, store them in an array, 
and then determine and display how many elements appear more than once.

Test Data :
Input the number of elements to be stored in the array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1

************************************************************************************************************/

/************************************************************************************************************
 * Library Include Files
************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/************************************************************************************************************
 * Application Include Files
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Feature Include Files
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Featire Macro Definitions
************************************************************************************************************/
#define OFFSET_1 1

/************************************************************************************************************
 * Feature Level Type Definitions
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Feature Level External Variables
************************************************************************************************************/
/* NONE */

/************************************************************************************************************
 * Task Local Function Prototypes
************************************************************************************************************/
void Array_Size(int Array[], int num);

int main()
{
    int i, j, k, n, Array_1[100], Array_2[100];
    int count, elem;

    count = 0;

    printf("Input N elements in the array :\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &Array_1[i]);

    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (Array_1[i] == Array_1[j])
            {
                int AlreadyExists;

                AlreadyExists = 0;

                for (k = 0; k < count; k++) // I don't like this nested loop 
                {
                    if(Array_2[k] == Array_1[i])
                    {
                        AlreadyExists = 1;
                        break;
                    }
                }
                if (AlreadyExists == 0)
                {
                    Array_2[count] = Array_1[i];
                    count++;

                }

                break;
            }
        }
    }
        
    printf("\nTotal number of duplicate elements: %d", count);
    printf("\nDuplicate elements: ");
    Array_Size(Array_2, count);
    printf("\n\n");
}

void Array_Size(int Array[], int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        printf(" %d ", Array[i]);
    }
}

