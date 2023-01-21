#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array&	operator=(const Array& rhs);
	virtual ~Array();

	unsigned int	size() const;

private:
	T	element;
};

#endif