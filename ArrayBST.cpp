#include <iostream>
#include "ArrayBST.h"

using namespace std;

ArrayBST::ArrayBST()
{
	this->element[0] = 0;
}
int ArrayBST::getMin()
{
	int num = this->element[1];
	for (int i = 1; i <= MAX_SIZE;)
	{
		if (this->element[i] != 0)
		{
			if (this->element[i] <= num)
				num = this->element[i];
			i = 2 * i;
		}
		else
		{
			break;
		}
	}
	return num;
}
int ArrayBST::getMax()
{
	int num = this->element[1];
	for (int i = 1; i <= MAX_SIZE;)
	{
		if (this->element[i] != 0)
		{
			if (this->element[i] >= num)
				num = this->element[i];
			i = 2 * i + 1;
		}
		else
		{
			break;
		}
	}
	return num;
}

int ArrayBST::max()
{
	return getMax();
}
int ArrayBST::min()
{
	return getMin();
}

ArrayBST::~ArrayBST() {}

void ArrayBST::add(int data)
{
	if (this->element[0] == 0)
	{
		this->element[1] = data;
	}
	else
	{
		for (int i = 1; i <= MAX_SIZE;)
		{
			if (data < this->element[i] == 0)
			{
				//Insert to left
				i = 2 * i;
			}
			else
			{
				i = 2 * i + 1;
			}
			if (this->element[i] == 0)
			{
				this->element[i] = data;
				break;
			}
		}
	}
	this->element[0] = this->element[0] + 1;
}

int main()
{
	ArrayBST a;
	a.add(50);
}
