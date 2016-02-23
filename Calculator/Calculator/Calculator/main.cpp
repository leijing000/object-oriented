/*
  FileName: main.cpp
  Author:雷晶        
  Date:16/2/22
  Description: 调用Scan对象的ToStringQueue(string input)，将输入传进去以获取队列。
               接着将这个队列传入Print对象的方法中，得到输出。   
  Function List: 
    1.ToStringQueue(string input) 
	2.Outstring(queue<string> q)
  */
#include"Calculator.h"
	 
int main()
{
	queue<string>q;
	string input;
	cin >> input;
	Scan Input;
	Print Output;
	q = Input.ToStringQueue(input);
	Output.OutstringQueue(q);
	system("pause");
	return 0;
}