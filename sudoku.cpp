// sudoku.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "mysudoku.h"
#include <iostream>
using namespace std;
mysudoku sk;



int _tmain(int argc, _TCHAR* argv[])
{
	sk.init();

	sk.show();
	sk.calc();
	cout << endl;
	sk.show();
	getchar();
	return 0;
}

