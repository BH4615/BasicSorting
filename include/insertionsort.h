#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <sort.h>

template<typename T>
class InsertionSort : Sort<T>
{
public:

	InsertionSort();
	InsertionSort(std::initializer_list<T> t);
	~InsertionSort();

	InsertionSort<T>& InsertionSort(const InsertionSort<T>& t);
	InsertionSort<T>& operator=(const InsertionSort<T>& t);

	InsersionSort<T>& InsertionSort(InsertionSort<T>&& t);
	InsersionSort<T>& InsertionSort(InsertionSort<T>&& t);

	virtual MaxSorting();
	virtual MinSorting();

private:

	T Identity;
};

#endif