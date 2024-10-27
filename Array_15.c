/************************************************************************************************************

Write a program in C to delete an element at a desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5

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

int main()
{
    int i, num;
    int Array[100];
    int position;

    printf("Enter the number of elements to be stored: ");
    scanf("%d", &num);

    printf("\nEnter the elements of the Array: \n");
    for (i = 0; i < num; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array[i]);
    }

printf("\nArray: \n");
    Display_Array(Array, num);
    
    printf("\nInput the value to be deleted\n");
    scanf("%d", &position);

    position = position - OFFSET_1;

    for (i = position; i < num; i++)
    {
        Array[i] = Array[i + 1];
    }

    num--;

    printf("\nArray after incrementing num: \n");
    Display_Array(Array, num);

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
