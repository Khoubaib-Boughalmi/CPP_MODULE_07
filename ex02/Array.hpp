#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include<cstdlib>

template<typename T>
class Array
{
    private:
        unsigned int _n;
        T *arr;
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array& other);
        unsigned int getSize(void) const;
        const Array& operator=(const Array& other);
        T &operator[](unsigned int idx);
        unsigned int size() const;
        class OutOfBoundException : public std::exception {
            const char *what() const throw();
        };
        ~Array();
};

#include "Array.tpp"

#endif