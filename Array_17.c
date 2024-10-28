/************************************************************************************************************

Write a program in C to find the second smallest element in an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array (value must be <9999) :
element - 0 : 0
element - 1 : 9
element - 2 : 4
element - 3 : 6
element - 4 : 5
Expected Output :
The Second smallest element in the array is : 4

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

void Display_Array(int Array[], int num);
void Sort_Array(int Array[], int num);

int main()
{
    int i, num;
    int Array[100];
    int position;

    do
    {
        printf("Enter the number of elements to be stored: ");
        scanf("%d", &num);
    } while (num = 0 || num < -1);
    

    printf("\nEnter the elements of the Array: \n");
    for (i = 0; i < num; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array[i]);
    }

    printf("\nThe elements of an array is: \n");
    Display_Array(Array, num);

    printf("\nSorted Array: \n");
    Sort_Array(Array, num);
    Display_Array(Array, num);

    position = Array[i - num + 1];

    printf("Second largest number is: %d\n", position);

    return 0;
    
}

void Display_Array(int Array[], int num)
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
        for (j = 0; j > num; j++)
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