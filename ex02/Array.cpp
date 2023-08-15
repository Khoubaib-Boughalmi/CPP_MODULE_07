#include "Array.h"

template<typename T>
Array<T>::Array()
{
    T[];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    arr = new T[n];
}

template<typename T>
Array<T>::Array(const Array& other) {
    if(other.getSize() > 0)
    {
        this->arr = new T[other.getSize()];
        for (unsigned int i = 0; i < this->getSize(); i++)
        {
            this->arr[i] = other.arr[i];
        }
    }
}

template<typename T>
const Array<T>& Array<T>::operator=(const Array& other) {
    if(this != &other)
    {
        this->_n = other.getSize();
    }
    return (*this);
}

template<typename T>
unsigned int Array<T>::getSize() const{
    return this->_n;
}


template<typename T>
Array<T>::~Array()
{
}