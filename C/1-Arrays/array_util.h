#ifndef ARRAY_H
#define ARRAY_H
typedef struct array_int IntArray; //incomplete definition
// typedef void(*IntArray_Init)(IntArray*,int size, ... );
typedef void(*IntArray_Append)(IntArray*, int);
typedef void(*IntArray_Print)(IntArray);
typedef void(*IntArray_Free)(IntArray*);

struct array_int
{
    int len;
    int* elements;// = 0;
    // IntArray_Init construct;
    IntArray_Append append;
    IntArray_Print print;
    IntArray_Free empty;
};

extern IntArray IntArray_Init(int size, ...);

// 
// my_array.print()



#endif
