/************************************************************************************************************

Write a program in C for the multiplication of two square matrices.
The task is to write a C program that performs multiplication of two square matrices. 
The program prompts the user to input the dimensions and elements for two matrices of the same size, 
computes their product, and displays the original matrices along with their multiplication result.

Test Data :
Input the rows and columns of first matrix : 2 2
Input the rows and columns of second matrix : 2 2
Input elements in the first matrix :
element - [0],[0] : 1
element - [0],[1] : 2
element - [1],[0] : 3
element - [1],[1] : 4
Input elements in the second matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :

1 2
3 4
The Second matrix is :

5 6
7 8
The multiplication of two matrix is :

19 22
43 50

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
void Multiply_Array(int Array_a[MAX_NUMBER][MAX_NUMBER], int Array_b[MAX_NUMBER][MAX_NUMBER], int Array_c[MAX_NUMBER][MAX_NUMBER], int num);

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

    Multiply_Array(Array_a, Array_b, Array_c, MAX_NUMBER);
    printf("\nMultiplication of two matrices: \n");
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

void Multiply_Array(int Array_a[MAX_NUMBER][MAX_NUMBER], int Array_b[MAX_NUMBER][MAX_NUMBER], int Array_c[MAX_NUMBER][MAX_NUMBER], int num)
{
    int i, j, k, sum;

    for (i = 0; i < num; i++)
    {   
        for (j = 0; j < num; j++)
        {
            sum = 0;
            for (k = 0; k < num; k++)
            {
                sum = sum + Array_a[i][k] * Array_b[k][j];
                Array_c[i][j] = sum;
            } 
        }
        
    }
}