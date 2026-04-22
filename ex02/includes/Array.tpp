#pragma once
#include "Array.hpp"
#include <fstream>
#include <stdexcept>


template <typename T>
Array<T>::Array(unsigned int n)
{
    initArray(n);
}

template <typename T>
Array<T>::Array(const Array& other)
{
    initArray(other.length);
    copyArray(other);
}


template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] array;
        initArray(other.length);
        copyArray(other);
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
}

template <typename T>
T& Array<T>::operator[](int index)
{
    if (index < 0 || static_cast<std::size_t>(index) >= length)
        throw std::out_of_range("Index out of bounds");
    return array[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const
{
    if (index < 0 || static_cast<std::size_t>(index) >= length)
        throw std::out_of_range("Index out of bounds");
    return array[index];
}


template <typename T>
void Array<T>::initArray(unsigned int n)
{
    array = new T[n]();
    length = n;
}

template <typename T>
void Array<T>::copyArray(const Array<T>& other)
{
    for (unsigned int i = 0; i < this->length; ++i)
    {
        this->array[i] = other.array[i];
    }
}

template <typename T>
std::size_t Array<T>::size() const
{
    return length;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr)
{
    if (arr.size() == 0)
    {
        os << "[]";
        return os;
    }
    os << "[" << arr[0];
    for (unsigned int i = 1; i < arr.size(); ++i)
    {
        os << ", " << arr[i];
    }
    os << "]";
    return os;
}