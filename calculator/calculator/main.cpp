/*
  FileName: main.cpp
  Author:�׾�        
  Date:16/3/24
  Description: ����Scan�����ToStringQueue(string input)�������봫��ȥ�Ի�ȡ���С�
               ���Ž�������д���Print����ķ����У��õ������   
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