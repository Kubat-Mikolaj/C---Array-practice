/************************************************************************************************************

Write a program in C to insert values in the array (unsorted list).
Test Data :
Input the size of array : 4
Input 4 elements in the array in ascending order:
element - 0 : 1
element - 1 : 8
element - 2 : 7
element - 3 : 10
Input the value to be inserted : 5
Input the Position, where the value to be inserted :2
Expected Output :
The current list of the array :
1 8 7 10
After Insert the element the new list is :
1 5 8 7 10

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
    int number, position;

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

    printf("\nEnter the new number to be added to an array: \n");
    scanf("%d", &number);
    
    printf("\nInput the value to be inserted\n");
    scanf("%d", &position);

    for (i = num; i > position; i--)
    {
        Array[i] = Array[i - 1];
    }

    Array[position] = number;
    num++;

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
