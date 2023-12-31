#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array():_n(0)
{
    this->arr = NULL;
}

template<typename T>
Array<T>::Array(unsigned int n): _n(n)
{
    this->arr = new T[n];
}

template<typename T>
Array<T>::Array(const Array& other):_n(other.getSize()) {
    if(other.getSize() > 0)
    {
        this->arr = new T[other.getSize()];
        for (unsigned int i = 0; i < this->getSize(); i++)
            this->arr[i] = other.arr[i];
    }
}

template<typename T>
const Array<T>& Array<T>::operator=(const Array& other) {
    this->_n = other.getSize();
    if(this != &other && this->getSize() > 0)
    {
        if(this->arr)
            delete[] (this->arr);
        this->arr = new T[other.getSize()];
        for (unsigned int i = 0; i < this->getSize(); i++)
            this->arr[i] = other.arr[i];
    }
    else if (this != &other && this->getSize() == 0)
    {
        if(this->arr)
            delete[] (this->arr);
        this->arr = NULL;
    }
    return (*this);
}

template<typename T>
unsigned int Array<T>::getSize() const{
    return this->_n;
}

template<typename T>
T &Array<T>::operator[](unsigned int idx)
{
    if(idx < 0 || idx >= this->getSize())
        throw OutOfBoundException();
    return this->arr[idx];
}

template<typename T>
unsigned int Array<T>::size() const
{
    return _n;
}

template<typename T>
const char *Array<T>::OutOfBoundException::what() const throw() {
    return "Error: OutOfBoundException";
}

template<typename T>
Array<T>::~Array()
{
    if(this->arr && this->getSize() > 0)
        delete[] (this->arr);
}

#endif