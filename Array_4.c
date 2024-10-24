/************************************************************************************************************

Write a program in C to copy the elements of one array into another array.

The task involves writing a C program to copy the elements from one array to another. 
The program will take a specified number of integer inputs to store in the first array, 
then copy these elements to a second array, and finally display the contents of both arrays.

Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12

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
    int n, i, Array_1[100], Array_2[100];

    printf("Input N elements in the array :\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array_1[i]);

        Array_2[i] = Array_1[i];
    }

    printf("\nSize of Array_1 is: \n");
    Array_Size(Array_1, n);

    printf("\nSize of Array_2 is: \n");
    Array_Size(Array_2, n);
    
    return 0;
}

void Array_Size(int Array[], int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        printf("[%d] ", Array[i]);
    }
}