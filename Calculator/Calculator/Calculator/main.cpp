/*
  FileName: main.cpp
  Author:�׾�        
  Date:16/2/22
  Description: ����Scan�����ToStringQueue(string input)�������봫��ȥ�Ի�ȡ���С�
               ���Ž�������д���Print����ķ����У��õ������   
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