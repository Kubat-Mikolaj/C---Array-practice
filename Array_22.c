/************************************************************************************************************

Write a program in C to find the transpose of a given matrix.
The task is to write a C program that computes the transpose of a given matrix. 
The program prompts the user to input the dimensions and elements of a matrix, 
calculates its transpose (where rows become columns and vice versa), 
and then displays both the original matrix and its transpose as output.

Test Data :
Input the rows and columns of the matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The matrix is :

1 2
3 4

The transpose of a matrix is :
1 3
2 4

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
#define MAX_NUMBER 2

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
void Display_Array(int Array[MAX_NUMBER][MAX_NUMBER], int num);

int main()
{
    int i, j;
    int Array_a[MAX_NUMBER][MAX_NUMBER], Array_b[MAX_NUMBER][MAX_NUMBER], Array_c[MAX_NUMBER][MAX_NUMBER];

    printf("\nEnter the elements of first Array: \n");
    for (i = 0; i < MAX_NUMBER; i++)
    {
        for (j = 0; j < MAX_NUMBER; j++)
        {
            printf("Enter value for disp[%d][%d]:", i + OFFSET_1, j + OFFSET_1);
            if (scanf("%d", &Array_a[i][j]) != 1) 
            {
                printf("Invalid input! Please enter an integer.\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    printf("\nThe Matrix: \n");
    Display_Array(Array_a, MAX_NUMBER);

    for(i = 0; i < MAX_NUMBER; i++)
    {
        for(j = 0; j < MAX_NUMBER; j++)
        {
            Array_b[j][i] = Array_a[i][j];
        }
    }
    
    printf("\nThe transpose of a matrix is: \n");
    Display_Array(Array_b, MAX_NUMBER);
}

void Display_Array(int Array[MAX_NUMBER][MAX_NUMBER], int num)
{
    int i, j;

    for (i =  0; i < num; i++)
    {   
        printf("\n");
        for (j = 0; j < num; j++)
        {
            printf("[%d]\t", Array[i][j]);
        }
    }
    printf("\n");
}