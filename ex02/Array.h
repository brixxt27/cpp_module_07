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

#endif
