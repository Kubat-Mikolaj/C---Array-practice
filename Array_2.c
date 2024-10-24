/************************************************************************************************************

Write a program in C to read n number of values in an array and display them in reverse order.

This task requires writing a C program to read a user-defined number of integer values into an 
array and then display these values in reverse order. 
After storing the values, the program should first print them in the original order and then 
print them in the reversed order.

Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2

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
/* NONE */


int main(void)
{
    int n, i, Array[100];

    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);
    for(i = 0; i < n; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array[i]);
    }

    printf("The values store into the array are :\n");

    for (i = 0; i < n; i++)
    {   
        
        printf("Element %d is %d \n",i + OFFSET_1, Array[i]);
    }

    printf("\nThe values store into the array in reverse are :\n");

    for (i = n - 1; i >= 0; i--)
    {
        printf("Element %d is %d \n",i + OFFSET_1, Array[i]);

    }
    printf("\n");
    return 0;
}