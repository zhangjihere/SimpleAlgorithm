//
// Created by zhangji on 3/6/18.
//

#include <stdio.h>

void printSizeOf(int intArray[]);
void printLength(int intArray[]);

int main(int argc, char* argv[])
{
    int array[] = { 0, 1, 2, 3, 4, 5, 6 };

    printf("sizeof of array: %d\n", (int) sizeof(array));
    printSizeOf(array);

    printf("Length of array: %d\n", (int)( sizeof(array) / sizeof(array[0]) ));
    printLength(array);
}

void printSizeOf(int intArray[])
{
    printf("sizeof of parameter: %d\n", (int) sizeof(intArray));
}

void printLength(int intArray[])
{
    printf("Length of parameter: %d\n", (int)( sizeof(intArray) / sizeof(intArray[0]) ));
}

//Output (in a 64-bit Linux OS):
//sizeof of array: 28
//sizeof of parameter: 8
//Length of array: 7
//Length of parameter: 2

//Output (in a 32-bit windows OS):
//sizeof of array: 28
//sizeof of parameter: 4
//Length of array: 7
//Length of parameter: 1