#ifndef MYSUDOKU
#define MYSUDOKU
#include "stdafx.h"
#include <vector>
using std::vector;
const int COUNT = 81;
class TreeNode
{
public:
	int index;//�ýڵ��Ԫ�����
	int value;//�ýڵ��Ԫ�أ���̽��ֵ
	TreeNode *firstChild;//ָ��ýڵ�ĵ�һ������
	TreeNode *nextBrother;//ָ��ýڵ���ֵܽڵ�
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