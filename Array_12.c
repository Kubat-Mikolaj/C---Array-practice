/************************************************************************************************************

Write a program in C to sort the elements of the array in descending order.
The task is to write a C program that sorts an array of integers in descending order. 
The program should prompt the user to input the size of the array and then the array elements. 
Finally, it should display the array elements sorted in descending order.

Test Data :
Input the size of array : 3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 9
element - 2 : 1
Expected Output :
Elements of the array in sorted descending order:
9 5 1

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
 * Feature Macro Definitions
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
void Sort_Array(int Array[], int num);

int main()
{
    int i, j, num;
    int Array[100];

    printf("Enter the number of elements to be stored: \n");
    scanf("%d", &num);

    printf("\nEnter the elements of the Array: \n");
    for (i = 0; i < num; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array[i]);
    }

    Sort_Array(Array, num);

    printf("\nSorted Array: \n");
    Array_Size(Array, num);

}

void Array_Size(int Array[], int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        printf("Element %d is %d\n",i + OFFSET_1, Array[i]);
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
