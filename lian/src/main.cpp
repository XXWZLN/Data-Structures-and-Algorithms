/********************************************************************************
* @author: Antarctic Polar Bear
* @date: 2022/9/7 13:42
* describe: none
********************************************************************************/

#include <iostream>
using namespace std;


int main(int argc,char *argv[])
{
	int a[] = {1,2,3,4,5};
	int *b = a;
	int *c = new int[8];
	for(int i = 0; i<5; i++)
	{
		*c = *b;
		c++;
		b++;
	}


	return 0;
}

