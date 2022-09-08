/********************************************************************************
* @author: Antarctic Polar Bear
* @date: 2022/9/7 13:42
* describe: none
********************************************************************************/

#include "SeqList_Class.h"

int main(int argc, char* argv[])
{
	DSL a(3);
	//	a.input(2);
	a.push_back(35);
	a.push_back(2);
	a.push_back(335);
	a.push_back(345);
	a.push_back(12);
	a.push_back(45);
	a.push_back(44);
	a.instert(5, 200);
	a.Delect(8);
	a.display();
	return 0;
}