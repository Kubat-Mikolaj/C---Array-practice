/************************************************************************************************************

Write a program in C to insert the values in the array (sorted list).
The task is to write a C program that inserts a new value into an already sorted array while maintaining the sorted order. 
The program should prompt the user with the number of elements to input, elements in ascending order, and the value to be inserted. 
It should then display the array before and after insertion.

Test Data :
Input number of elements you want to insert (max 100): 5
Input 5 elements in the array in ascending order:
element - 0 : 2
element - 1 : 3
element - 2 : 4
element - 3 : 7
element - 4 : 8
Input the value to be inserted : 5
The existing array list is :
2 3 4 7 8
After Insert the list is :
2 3 4 5 7 8

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
    int i, num;
    int Array[100];
    int number;

    printf("Enter the number of elements to be stored: ");
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


    num++;
    printf("\nWrite new element to be added to array: ");
    scanf("%d", &number);

    Array[i] = Array[i] + number;
    Sort_Array(Array, num);
    Array_Size(Array, num);

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

void Sort_Array(int Array[], int num)
{
    int i, j, temp;

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (Array[i] < Array[j])
            {
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp;
            }
        }
    }
}
