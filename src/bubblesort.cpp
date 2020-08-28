#include <bubblesort.h>

// default constructor
template<typename T>
BubbleSort<T>::BubbleSort()
{}

// std::initializer_list constructor
template<typename T>
BubbleSort<T>::BubbleSort(std::initializer_list<T> t)
{
	SetDataList(t)
}

/*
BubbleSort();									// default constructor
BubbleSort(std::initialzer_list<T> t);			// initializer constructor
virtual ~BubbleSort();							// destructor

BubbleSort<T>& BubbleSort(const BubbleSort<T>& t);						// copy constructor
BubbleSort<T>& operator=(const BubbleSort<T>T& t);						// copy assignment operator

BubbleSort<T>& BubbleSort(BubbleSort<T>&& t);							// move constructor
BubbleSort<T>& operator=(BubbleSort<T>&& t);							// move assignment operator

virtual MaxSorting();
virtual MinSorting();
	virtual MaxSorting() = 0;
	virtual MinSorting() = 0;
	void SetDataList();
	void SetDataList(std::initializer_list<T> l);
	void EraseDataList();
private:
	virtual Sorting();
	std::unique_ptr<T[]> my_data = nullptr;
	int dataSize = 0;
*/