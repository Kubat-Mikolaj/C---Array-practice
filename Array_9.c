/*

Write a program in C to find the maximum and minimum elements in an array.
The task involves writing a C program to find and display the maximum and minimum elements in an array. 
The program will take a specified number of integer inputs, store them in an array, and then determine and print the highest and lowest values among the elements

Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21

*/

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
/* NONE */

int main()
{
    int i, j, n, Array[100];
    int max, min;


    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n",n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array[i]); 
    }

    max = Array[0];
    min = Array[0];

    for (i = 0; i < n; i++)
    {
        if (Array[i] > max)
        {
            max = Array[i];
        }
        if (Array[i] < min)
        {
            min = Array[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);
    return 0;
    
}