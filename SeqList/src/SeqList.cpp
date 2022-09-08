/********************************************************************************
* @author: Antarctic Polar Bear
* @date: 2022/9/8 12:05
* describe: none
********************************************************************************/

#include "SeqList_Class.h"


Dynamic_SeqList::Dynamic_SeqList(int maxsize)
	: size(0), capacity(maxsize * 2)
{
	Begin_Iterator = new ElemType[size * 2];
	End_Iterator = Begin_Iterator + size;
}

Dynamic_SeqList::~Dynamic_SeqList()
{
	delete[] Begin_Iterator;
}

void Dynamic_SeqList::display()
{
	for (int i = 0; i < size; i++)
	{
		cout << Begin_Iterator[i] << " ";
	}
	cout << endl;
}

void Dynamic_SeqList::input(int n)
{
	if (n >= capacity)
	{
		extand();
	}
	for (int i = 0; i < n; i++)
	{
		cin >> Begin_Iterator[i];
	}
	if (n != size)
		size = n;
	End_Iterator = Begin_Iterator + size;
}

void Dynamic_SeqList::extand()
{
	ElemType* New_array = new ElemType[2 * capacity];
	ElemType* Old_array = Begin_Iterator;
	ElemType* New_array_Begin = New_array;
	do {
		*New_array = *Begin_Iterator;
		Begin_Iterator++;
		New_array++;
	} while (Begin_Iterator != End_Iterator);
	delete[] Old_array;
	Begin_Iterator = New_array_Begin;
	End_Iterator = Begin_Iterator + size;
	capacity *= 2;
}

bool Dynamic_SeqList::find(ElemType find_num)
{
	for (int i = 0; i < size; i++)
	{
		if (Begin_Iterator[i] == find_num)
			return true;
	}
	return false;
}

void Dynamic_SeqList::push_back(ElemType push_num)
{
	if (size == capacity)
	{
		extand();
	}
	*End_Iterator = push_num;
	End_Iterator++;
	size++;
}

void Dynamic_SeqList::instert(int n, ElemType num)
{
	if (size == capacity)
	{
		extand();
	}
	for (int i = size; i > n; i--)
	{
		Begin_Iterator[i] = Begin_Iterator[i - 1];
	}
	Begin_Iterator[n] = num;
	size++;
}

void Dynamic_SeqList::Delect(int n)
{
	for(int j = n + 1; j < size; j++)
	{
		Begin_Iterator[j - 1] = Begin_Iterator[j];
	}
	size--;
}