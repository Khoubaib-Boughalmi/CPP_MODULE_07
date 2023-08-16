#include "Array.h"

template<typename T>
Array<T>::Array():_n(0)
{
    this->arr = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n): _n(n)
{
    arr = new T[n];
}

template<typename T>
Array<T>::Array(const Array& other) {
    if(other.getSize() > 0)
    {
        if(this->arr)
            delete this->arr;
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
        if(this->arr)
            delete this->arr;
        this->arr = new T[other.getSize()];
        for (unsigned int i = 0; i < this->getSize(); i++)
        {
            this->arr[i] = other.arr[i];
        }
        this->_n = other.getSize();
    }
    return (*this);
}

template<typename T>
unsigned int Array<T>::getSize() const{
    return this->_n;
}

template<typename T>
T &Array<T>::operator[](int idx)
{
    if(idx >= this->_n)
        throw std::exception();
    return this->arr[idx];
}

template<typename T>
unsigned int Array<T>::size() const
{
    return _n;
}

template<typename T>
Array<T>::~Array()
{
}