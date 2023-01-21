#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array&	operator=(const Array& rhs);
	virtual ~Array();

	T&	operator[](const unsigned int idx) const;
	unsigned int	size() const;

private:
	T*				mArr;
	unsigned int	mSize;
};

template <typename T>
Array<T>::Array()
	: mSize(0) 
{
	mArr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
	: mSize(n)
{
	mArr = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other)
	: mSize(other.mSize)
{
	mArr = new T(mSize);

	std::memcpy(mArr, other.mArr, mSize + 1);
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& rhs)
{
	if (this == &rhs)
		return *this;
	
	delete[] mArr;
	mSize = rhs.mSize;
	mArr = new T[mSize];

	std::memcpy(mArr, rhs.mArr, mSize + 1);
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] mArr;
}

template <typename T>
T&	Array<T>::operator[](const unsigned int idx) const
{
	if (idx < 0 || idx > mSize - 1)
		throw std::out_of_range("Out of range!");
	return mArr[idx];
}

template <typename T>
unsigned int Array<T>::size() const
{
	return mSize;
}

#endif
