#ifndef SORT_H
#define SORT_H

#include<memory>

// class, 열거형, 메서드 등의 이름을 만들 때는 대문자로 시작하는 변수명 사용
// 메서드의 매개변수일 경우 첫글자 소문자
// constant 변수의 경우 모든 문자를 대문자로 작성한다.


template<typename T>
class Sort
{
public:
	
	Sort() ;						   // default constructor
	Sort(std::initializer_list<T> l);  // size 는 ㅣ.size();
	// 소멸자는 virtual로 선언해주어야 하고, 절대 exception을 Throw 하지 않아야 한다. 암시적으로 noexcept이다.
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