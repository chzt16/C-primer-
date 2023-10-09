//题目：使用3个用户定义的函数，并生成输出
#include <iostream>
using namespace std;

void Phrase1(void);//void写不写无所谓
void Phrase2(void);

int main()
{
	cout << "Tree blind mice" << endl;
	cout << "Tree blind mice" << endl;
	Phrase1();//函数调用，由于已经在函数中cout输出了，所以这里不用再重复cout，直接调用即可
	Phrase2();

	return 0;
}
void Phrase1(void)
{
	cout << "See how they run" << endl;
}
void Phrase2(void)
{
	cout << "See how they run" << endl;
}
//以上是GPT帮我矫正过的
/*
以下是别人的答案
#include<iostream>
using namespace std;

void A_function()
{
	cout << "Three blind mice" << endl;
}

void B_function()
{
	cout << "See how they run" << endl;
}

int main()
{
	A_function();
	A_function();
	B_function();
	B_function();
	return 0;
}

*/
