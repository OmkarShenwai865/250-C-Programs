//zu is a format specifier used for the size_t type, which is an unsigned integer type that represents the size of objects in memory. 
#include<stdio.h>
int main(){
    int intType;
    float floatType;
    char CharType;
    double DoubleType;
    printf("Size of int = %zu\n",sizeof(intType));
    printf("Size of float = %zu\n",sizeof(floatType));
    printf("Size of char = %zu\n",sizeof(CharType));
    printf("Size of double = %zu\n",sizeof(DoubleType));
}