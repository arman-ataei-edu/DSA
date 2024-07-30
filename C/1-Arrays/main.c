#include "array_util.h"
#include<stdio.h>
#include <stdlib.h>
// **************************************
// run the following to compile
// gcc -o main main.c array_util.c

void main(void){

    IntArray myArray = IntArray_Init(2, 1,2);
    
    myArray.print(myArray);
    myArray.empty(&myArray);
    myArray.empty(&myArray);

    myArray.print(myArray);
    myArray.append(&myArray, 10);
    myArray.append(&myArray, 10);
    myArray.print(myArray);

    // myArray.construct = intArrayInit;
    // // myArray.free(&myArray);
    // intArrayInit(&myArray, 2, 1,2);
    // myArray.print(myArray);
    // myArray.construct(&myArray, 3, 1,2,3);
    // myArray.print(myArray);
    // myArray.append(&myArray, 10);
    // myArray.print(myArray);
    // myArray.empty(&myArray);
    // myArray.print(myArray);

}