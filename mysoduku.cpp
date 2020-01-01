#include "mysudoku.h"

#include <iostream>
#include <algorithm> 

using namespace std;
mysudoku::mysudoku()
{
	for (size_t i = 0; i < COUNT; i++)
	{
		data[i] = 0;
		n_data[i].clear();
	}
}
mysudoku::~mysudoku()
{

}
void mysudoku::show()
{
	size_t j=1;
	for (size_t i = 0; i < COUNT; i++)
	{

		cout <<data[i]<<" ";

		if (!((i + 1) % 3))
			cout << "   ";

		if (!((i + 1) % 9))
		{
			cout << endl;
			j++;
			if ((j)%3==1)
			{
				cout << endl;
			}
		}
			
	}
}

void mysudoku::init()
{	
	//////row 1
	//data[9 * 0 + 0] = 1;
	//data[9 * 0 + 1] = 0;
	//data[9 * 0 + 2] = 0;

	//data[9 * 0 + 3] = 8;
	//data[9 * 0 + 4] = 3;
	//data[9 * 0 + 5] = 0;

	//data[9 * 0 + 6] = 0;
	//data[9 * 0 + 7] = 0;
	//data[9 * 0 + 8] = 2;
	//////row 2
	//data[9 * 1 + 0] = 5;
	//data[9 * 1 + 1] = 7;
	//data[9 * 1 + 2] = 0;

	//data[9 * 1 + 3] = 0;
	//data[9 * 1 + 4] = 0;
	//data[9 * 1 + 5] = 1;

	//data[9 * 1 + 6] = 0;
	//data[9 * 1 + 7] = 0;
	//data[9 * 1 + 8] = 0;

	//////row 3
	////data[9 * 2 + 0] = 18;
	////data[9 * 2 + 1] = 19;
	////data[9 * 2 + 2] = 20;
	//data[9 * 2 + 3] = 5;
	////data[9 * 2 + 4] = 22;
	//data[9 * 2 + 5] = 9;
	//data[9 * 2 + 6] = 0;
	//data[9 * 2 + 7] = 6;
	//data[9 * 2 + 8] = 4;

	//////row 4
	//data[9 * 3 + 0] = 7;
	////data[9 * 3 + 1] = 28;
	//data[9 * 3 + 2] = 4;
	////data[9 * 3 + 3] = 30;
	////data[9 * 3 + 4] = 31;
	//data[9 * 3 + 5] = 8;
	//data[9 * 3 + 6] = 5;
	//data[9 * 3 + 7] = 9;
	//data[9 * 3 + 8] = 0;


	//////row 5
	////data[9 * 4 + 0] = 36;
	////data[9 * 4 + 1] = 5;
	//data[9 * 4 + 2] = 3;
	//data[9 * 4 + 3] = 0;
	//data[9 * 4 + 4] = 1;
	////data[9 * 4 + 5] = 0;
	//data[9 * 4 + 6] = 4;
	////data[9 * 4 + 7] = 5;
	////data[9 * 4 + 8] = 6;

	//////row 6
	//data[9 *5 + 0] = 0;
	//data[9 *5 + 1] = 5;
	//data[9 *5 + 2] = 1;
	//data[9 *5 + 3] = 4;
	////data[9 *5 + 4] = 4;
	////data[9 *5 + 5] = 3;
	//data[9 *5 + 6] = 3;
	////data[9 *5 + 7] = 6;
	//data[9 *5 + 8] = 6;

	//////row 7
	//data[9 *6 + 0] = 3;
	//data[9 *6 + 1] = 6;
	////data[9 *6 + 2] = 0;
	//data[9 *6 + 3] = 7;
	////data[9 *6 + 4] = 0;
	//data[9 *6 + 5] = 4;
	////data[9 *6 + 6] = 7;
	////data[9 *6 + 7] = 7;
	////data[9 *6 + 8] = 9;

	//////row 8
	////data[9 * 7 + 0] = 8;
	////data[9 * 7 + 1] = 0;
	////data[9 * 7 + 2] = 2;
	//data[9 * 7 + 3] = 6;
	////data[9 * 7 + 4] = 8;
	////data[9 * 7 + 5] = 8;
	////data[9 * 7 + 6] = 8;
	//data[9 * 7 + 7] = 7;
	//data[9 * 7 + 8] = 9;

	//////row 9
	//data[9 * 8 + 0] = 8;
	///*data[9 * 8 + 1] = 4;
	//data[9 * 8 + 2] = 0;
	//data[9 * 8 + 3] = 0;*/
	//data[9 * 8 + 4] = 5;
	//data[9 * 8 + 5] = 2;
	///*data[9 * 8 + 6] = 2;
	//data[9 * 8 + 7] = 5;*/
	//data[9 * 8 + 8] = 3;
	////for (size_t i = 0; i < COUNT; i++)
	////{
	////	data[i] = i / 9 / 3 * 10 + i % 9 / 3 ;
	////}
	////for (size_t i = 0; i < COUNT; i++)
	////{
	////	data[i] = i;
	////}
	
	int indata[COUNT] = {
		0,0,0,0,5,7,0,8,0,
		3,0,0,0,0,0,0,0,0,
		0,0,2,9,0,0,4,0,0,
		
		2,0,0,8,0,9,3,0,0,
		4,0,0,0,0,0,0,0,7,
		0,0,7,4,0,6,0,0,8,
		
		0,0,6,0,0,2,7,0,0,
		0,0,0,0,0,0,0,0,5,
		0,9,0,3,1,0,0,0,0
	};
	inTable(&indata[0]);
	for (size_t i = 0; i < COUNT; i++)
	{
		if (!data[i])
		{
			for (size_t t = 1; t <= 9; t++)
			{
				n_data[i].push_back(t);
			}
		}
			
	}
	head = NULL;

}

bool mysudoku::calcIndex(int index)
{
	//取出第n个元素,其是第n/9行，n%9列（base 0）
	//块起点为 n/9/3*3行 n%9/3*3列 
	int row = index / 9;
	int col = index % 9;
	if (data[index])
		return false;
	int tem;
	//check row
	for (size_t i = 0; i < 9; i++)
	{
		tem = data[9 * row + i];
		if (tem)
		{
			n_data[index].erase(std::remove(n_data[index].begin(), n_data[index].end(), data[9 * row + i]), n_data[index].end());
		}
	}
	//check col
	for (size_t i = 0; i < 9; i++)
	{
		tem = data[9 * i + col];
		if (tem)
		{
			n_data[index].erase(std::remove(n_data[index].begin(), n_data[index].end(), data[9 * i + col]), n_data[index].end());
		}
	}

	//block
	int posx = col / 3;//step=3
	int posy = row / 3;//step=27

	for (size_t j = posy * 27; j < posy * 27 + 3 * 9; j = j + 9)
	{
		for (size_t i = posx * 3; i < posx * 3 + 3; i++)
		{
			n_data[index].erase(std::remove(n_data[index].begin(), n_data[index].end(), data[i+j]), n_data[index].end());
		}
	}

	if (n_data[index].size()==1)
	{
		data[index] = n_data[index].at(0);
		return true;
	}

	return false;
}
void mysudoku::guess(int guess_index)
{
	
	for (size_t i = 0; i < n_data[guess_index].size(); i++)
	{
		newNode = new TreeNode();
		newNode->index = guess_index;
		newNode->value = n_data[guess_index].at(i);

	}
}
void mysudoku::calc()
{
	bool is_find = false;
	do
	{
		is_find = false;
		for (size_t i = 0; i < COUNT; i++)
		{
			if (calcIndex(i))
			{
				is_find = true;
			}
		}
	} while (is_find);
	int min_index;
	if (!getState(min_index))
	{
		cout <<"min_index:"<< min_index << " "<<n_data[min_index].size() <<endl;
		for (auto i : n_data[min_index])
			cout << i << " ";
	}
	
}

bool mysudoku::getState(int& min_index)
{
	bool is_finish = true;
	int min_value = 10;
	for (size_t i = 0; i < COUNT; i++)
	{
		if (!data[i])
		{
			is_finish = false;
			if (min_value>n_data[i].size())
			{
				min_value = n_data[i].size();
				min_index = i;
			}
		}
	}
	return is_finish;
}


void mysudoku::inTable(int*i)
{
	memcpy(data, i, sizeof(int)*COUNT);
}