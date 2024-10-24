/************************************************************************************************************

Write a program in C to count the frequency of each element of an array.
The task requires writing a C program to count and display the frequency of each element in an array. 
The program will accept a specified number of integer inputs, store them in an array, and then determine and print how many times each element appears in the array.

Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times

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

int main()
{
    int n,i,j;
    int Array_1[100];
    int Freq_Arr[100];
    int count;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n",n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i + OFFSET_1);
        scanf("%d", &Array_1[i]);
        Freq_Arr[i] = -1;
    }
    
    printf("\n");
    for(i = 0; i < n; i++)
    {
        count = 1;
        for(j = i+1; j < n; j++)
        {
            if(Array_1[i] == Array_1[j])
            {
                count++;
                Freq_Arr[j] = 0;
            }  
        }
        if(Freq_Arr[i] != 0)
        {
            Freq_Arr[i] = count; 
            printf("%d occurs %d times\n", Array_1[i], Freq_Arr[i]);
        }

    }
    return 0;

}
