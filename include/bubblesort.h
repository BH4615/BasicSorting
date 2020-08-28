#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "sort.h"

template<typename T>
class BubbleSort : Sort<T>
{
public:
	BubbleSort();									// default constructor
	BubbleSort(std::initializer_list<T> t);			// initializer constructor
	virtual ~BubbleSort();							// destructor

	BubbleSort<T>& BubbleSort(const BubbleSort<T>& t);						// copy constructor
	BubbleSort<T>& operator=(const BubbleSort<T>T& t);						// copy assignment operator

	BubbleSort<T>& BubbleSort(BubbleSort<T>&& t);							// move constructor
	BubbleSort<T>& operator=(BubbleSort<T>&& t);							// move assignment operator

	virtual MaxSorting();
	virtual MinSorting();

private:
	T Identity;
};

#endif