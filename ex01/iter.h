#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void	iter(T* arr, const unsigned long size, void (*func)(T&))
{
	if (func == NULL) {
		std::cout << "Function pointer is NULL" << std::endl;
		return;
	}
	for (unsigned long i = 0; i < size; ++i) {
		(*func)(arr[i]);
	}
}

template <typename T>
void	iter(const T* arr, const unsigned long size, void (*func)(const T&))
{
	if (func == NULL) {
		std::cout << "Function pointer is NULL" << std::endl;
		return;
	}
	for (unsigned long i = 0; i < size; ++i) {
		(*func)(arr[i]);
	}
}

template <typename T>
void	printElement(const T& target)
{
	std::cout << target << std::endl;
}

template <typename T>
void	increase(T& target)
{
	++target;
}

template <typename T>
void	decrease(T& target)
{
	--target;
}

#endif