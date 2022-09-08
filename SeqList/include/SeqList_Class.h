/********************************************************************************
* @author: Antarctic Polar Bear
* @date: 2022/9/8 11:31
* describe: none
********************************************************************************/


#ifndef DATA_STRUCTURES_AND_ALGORITHMS_SEQLIST_CLASS_H
#define DATA_STRUCTURES_AND_ALGORITHMS_SEQLIST_CLASS_H

#include "iostream"
using namespace std;


typedef int ElemType;

////顺序表静态分配的类
typedef class Dynamic_SeqList
{
private:
	int size,capacity;
	ElemType * Begin_Iterator, *End_Iterator = Begin_Iterator + size;
public:
	Dynamic_SeqList(int);
	~Dynamic_SeqList();
	void display();
	void input(int);
	//动态扩容
	void extand();
	bool find(ElemType);
	//尾插
	void push_back(ElemType);
	//插入
	void instert(int, ElemType);
	void Delect(int);
;} DSL;


#endif//DATA_STRUCTURES_AND_ALGORITHMS_SEQLIST_CLASS_H
