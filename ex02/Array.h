#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template<typename T>
class Array
{
    private:
        unsigned int _n;
        T *arr;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        unsigned int getSize(void) const;
        const Array& operator=(const Array& other);
        ~Array();
};

#endif