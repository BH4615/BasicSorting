#ifndef SORT_H
#define SORT_H

#include<memory>

// class, ������, �޼��� ���� �̸��� ���� ���� �빮�ڷ� �����ϴ� ������ ���
// �޼����� �Ű������� ��� ù���� �ҹ���
// constant ������ ��� ��� ���ڸ� �빮�ڷ� �ۼ��Ѵ�.


template<typename T>
class Sort
{
public:
	
	Sort() ;						   // default constructor
	Sort(std::initializer_list<T> l);  // size �� ��.size();
	// �Ҹ��ڴ� virtual�� �������־�� �ϰ�, ���� exception�� Throw ���� �ʾƾ� �Ѵ�. �Ͻ������� noexcept�̴�.
	virtual ~Sort();

	Sort(const Sort<T>& t);				// copy constructor
	Sort<T>& operator=(const Sort<T>& t);			// copy operator

	Sort(Sort<T>&& t);					   // move constructor
	Sort<T>& operator=(Sort<T>&& t);			   // move assignment operator
	
	virtual MaxSorting() = 0;
	virtual MinSorting() = 0;
	void SetDataList();
	void SetDataList(std::initializer_list<T> l);
	void EraseDataList();
	
private:
	virtual Sorting();
	std::unique_ptr<T[]> my_data = nullptr;
	int dataSize = 0;
};


#endif SORT_H