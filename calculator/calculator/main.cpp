/*
  FileName: main.cpp
  Author:雷晶        
  Date:16/3/24
  Description: 调用Scan对象的ToStringQueue(string input)，将输入传进去以获取队列。
               接着将这个队列传入Print对象的方法中，得到输出。   
  Function List: 
    1.ToStringQueue(string input) 
	2.Outstring(queue<string> que)
  */

#include"Calculator.h"  

int main()
{
    string input;
    cin >> input;

    Scan Input;
    Print Output;
	queue<string>que;

    que = Input.ToStringQueue(input);
    Output.OutstringQueue(que);
    
    return 0;
}