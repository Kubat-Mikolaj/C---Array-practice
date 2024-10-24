/*

Write a program in C to print all unique elements in an array.
This task requires writing a C program to identify and print all unique elements in an array. 
The program will accept a specified number of integer inputs, store them in an array, and then determine and display the elements that appear only once in the array

Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5

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
  int n, count;
  int Array_1[100];
  int i,j;

  printf("Input N elements in the array :\n");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    printf("element - %d : ", i + 1);
    scanf("%d", &Array_1[i]);
  }

  // Checking which elements in array are equal
  printf("The unique element(s): ");
  for (i = 0; i < n; i++)
  {
    count = 0; // Reset the counter for each element. Bcs more elements can be unique

    for (j = 0; j < n+1; j++)
    {
      if (i != j)
      {
        if (Array_1[i] == Array_1[j])
        {
          count++;
        }
      }
    }
    if (count == 0)
    {
      printf("%d ", Array_1[i]);
    }
  }
  printf("\n");
  return 0;
}


