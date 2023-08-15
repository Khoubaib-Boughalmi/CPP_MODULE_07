#ifndef ITER_H
#define ITER_H

#include <iostream>

template<typename T, typename Func>
void iter(T* array, size_t length, Func f) {
    for (size_t i = 0; i < length; i++)
    {
        array[i] = f(array[i]);
    }
}

template<typename T>
T square(T value)
{
    return value * value;  
}

#endif