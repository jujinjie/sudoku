#ifndef MYSUDOKU
#define MYSUDOKU
#include "stdafx.h"
#include <vector>
using std::vector;
const int COUNT = 81;
class TreeNode
{
public:
	int index;//该节点的元素序号
	int value;//该节点的元素（试探）值
	TreeNode *firstChild;//指向该节点的第一个孩子
	TreeNode *nextBrother;//指向该节点的兄弟节点
};

class mysudoku
{
public:
	mysudoku();
	~mysudoku();
	void show();
	void init();
	bool calcIndex(int);
	void calc();
	bool getState(int&);
	void inTable(int*);
	void guess(int);



private:
	int data[COUNT];
	vector<int> n_data[COUNT];
	TreeNode *head;
	TreeNode *newNode;
};




#endif