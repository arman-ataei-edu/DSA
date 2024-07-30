#include "array_util.h"

#include<stdio.h>
#include<stdarg.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h> //bool type

// supporting sorts for arrays
typedef enum sotrings {
    buble,
    insertion,
    merge,
    q_sort,
    selection
}Sorting;

typedef enum orders{
    increasing,
    decreasing
}Order;


// function declarations for `IntArray`:
void _IntArray_Append_(IntArray* array, int elem);
void _IntArray_Print_(IntArray array);
void _IntArray_Free_(IntArray* array);
void _IntArray_Insert_(IntArray* array, int index);
int _IntArray_Del_Index_(IntArray* array, int index); //removing 
int _IntArray_Del_Element_(IntArray* array, int index); //returning index-th element from array and then removing it
int _IntArray_Binary_Search_(IntArray array, int index);
int _IntArray_Pop_(IntArray* array); //returning last element of the array and then removing it from the array
int _InstArray_Sorted_(IntArray* array, Sorting sort, Order ord); 
void _InstArray_Sort_(IntArray* array, Sorting sort, Order ord);

// function definitions for IntArray
IntArray IntArray_Init(int size, ...)
{
    IntArray newArray = {0, 0, 0, 0, 0};
    va_list args;

    va_start(args, size);
    newArray.len = size;
    // printf('%lu', sizeof(myArray));
    newArray.elements = (int*) calloc(sizeof(int), size);
    // int* myArray = (*array).elements;
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (newArray.elements == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    newArray.len = 0;
    for(int i = 0; i< size; i++)
    {
        newArray.elements[i] = va_arg(args, int);
        newArray.len += 1;
    }
    newArray.append = _IntArray_Append_;
    newArray.print = _IntArray_Print_;
    newArray.empty = _IntArray_Free_;
    return newArray;
}

void _IntArray_Append_(IntArray* array, int elem)
{
    int* myArray = (int*)realloc((*array).elements, (*array).len + 1);
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (myArray == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    
    (*array).len += 1;
    (*array).elements = myArray;

    myArray[(*array).len - 1] = elem;
}

void _IntArray_Print_(IntArray array)
{
    // printf("%d\n",array.len);
    if(array.len > 0)
    {
        printf("array: [ ");

        for (int i = 0; i < array.len; i++ )
        {
            if(i < array.len - 1){printf("%d, ", array.elements[i]);}
            else{printf("%d ", array.elements[i]);}
        }
        printf("]\n");
    }else{
        printf("array: [ ]\n");
    }
}

void _IntArray_Free_(IntArray* array)
{
    if((*array).len > 0 )
    {
        int* myArray = (*array).elements;
        free(myArray);
        myArray = 0;
        (*array).len = 0;
        // printf("array is empty now!\n");
    }
    else{
        printf("array is empty!\n");
        return;
    }
}
/******************End-of-IntArray*******************/
/***************************************************/


// function declarations for StrArray



// Function definitions for StrArray

/******************End-of-StrArray*******************/
/***************************************************/

// function declarations for FloatArray


// function definitions for FloatArray

/******************End-of-FloatArray*******************/
/***************************************************/

// function declarations for DoubleArray


// function definitions for DoubleArray


