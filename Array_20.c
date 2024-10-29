/************************************************************************************************************

Write a program in C for the subtraction of two matrices.
The task is to write a C program that performs multiplication of two square matrices. 
The program prompts the user to input the dimensions and elements for two matrices of the same size, 
computes their product, and displays the original matrices along with their multiplication result.

Test Data :
Input the size of the square matrix (less than 5): 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Input elements in the second matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Expected Output :
The First matrix is :

5 6
7 8
The Second matrix is :

1 2
3 4
The Subtraction of two matrix is :

4 4
4 4

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
#define MAX_NUMBER 3

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
void Sub_Array(int Array_a[MAX_NUMBER][MAX_NUMBER], int Array_b[MAX_NUMBER][MAX_NUMBER], int Array_c[MAX_NUMBER][MAX_NUMBER], int num);

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

    printf("\nEnter the elements of second Array: \n");
    for (i = 0; i < MAX_NUMBER; i++)
    {
        for (j = 0; j < MAX_NUMBER; j++)
        {
            printf("Enter value for disp[%d][%d]:", i + OFFSET_1, j + OFFSET_1);
            if (scanf("%d", &Array_b[i][j]) != 1) 
            {
                printf("Invalid input! Please enter an integer.\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    printf("\nFirst Matrix: \n");
    Display_Array(Array_a, MAX_NUMBER);

    printf("\nSecond Matrix: \n");
    Display_Array(Array_b, MAX_NUMBER);

    Sub_Array(Array_a, Array_b, Array_c, MAX_NUMBER);
    printf("\nSubtract of two matrices: \n");
    Display_Array(Array_c, MAX_NUMBER);

    return 0;
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

void Sub_Array(int Array_a[MAX_NUMBER][MAX_NUMBER], int Array_b[MAX_NUMBER][MAX_NUMBER], int Array_c[MAX_NUMBER][MAX_NUMBER], int num)
{
    int i, j;

    for (i = 0; i < num; i++)
    {   
        for (j = 0; j < num; j++)
        {
            Array_c[i][j] = Array_a[i][j] - Array_b[i][j];
        }
        
    }
}