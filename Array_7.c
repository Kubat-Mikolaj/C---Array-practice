/************************************************************************************************************

Write a program in C to merge two arrays of the same size sorted in descending order.
This task requires writing a C program to merge two arrays of the same size and sort the resulting array in descending order. 
The program will take inputs for both arrays, merge them, and then sort and display the merged array in descending order.

Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1

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
void Combine_Array(int Array_1[], int Array_2[], int Array_3[], int num1, int num2);
void Sort_Array(int Array[], int num);

int main()
{
    int i, n;
    int Array_1[100], Array_2[100], Array_3[200];
    int num1, num2;

    printf("Enter the number of elements to be stored: \n");
    scanf("%d", &num1);

    printf("\nEnter the elements of the first Array: \n");
    for (i = 0; i < num1; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array_1[i]);
    }
    
    printf("\nEnter the elements of the second Array: \n");
    for (i = 0; i < num1; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array_2[i]);
    }

    printf("\nFirst Array: \n");
    Array_Size(Array_1, num1);

    printf("\nSecond Array: \n");
    Array_Size(Array_2, num1);

    // Combine Array_1 and Array_2

    num2 = num1;
    num2 = num2 + num1;

    Combine_Array(Array_1, Array_2, Array_3, num1, num1);
    printf("\nCombined Array: \n");
    Array_Size(Array_3, num2);

    Sort_Array(Array_3, num2);
    printf("\nSorted Array: \n");
    Array_Size(Array_3, num2);

    return 0;
}

void Array_Size(int Array[], int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        printf("Element %d is %d\n",i + OFFSET_1, Array[i]);
    }
}

void Combine_Array(int Array_1[], int Array_2[], int Array_3[], int num1, int num2)
{
    int i,j;

    for (i = 0; i < num1; i++)
    {
        Array_3[i] = Array_1[i];
    }
    for (j = 0; j < num2; j++)
    {
        Array_3[i] = Array_2[j];
        i++;
    }
}

void Sort_Array(int Array[], int num)
{
    int i, j, temp;

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (Array[i] > Array[j])
            {
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
}

