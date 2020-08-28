#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <sort.h>

template<typename T>
class SelectionSort : Sort<T>
{
public:
	SelectionSort();
	SelectionSort(std::initializer_list<T> t);
	~SelectionSort();

	SelectionSort<T>& SelectionSort(const SelectionSort<T>& t);
	SelectionSort<T> operator=(const SelectionSort<T>& t);

	SelectionSort<T>& SelectionSort(SelectionSort<T>&& t);
	SelectionSort<T>& operator=(SelectionSort<T>&& t);

	virtual MaxSorting();
	virtual MinSorting();

private:
	T Identity;
};

#endif