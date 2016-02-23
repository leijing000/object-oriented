#include"Calculator.h"
 
  /*
  Description:该函数接收一个四则运算表达式，并逐个字符扫描这个表达式，
              将数字和符号提取出来，得到一组string。将这些string存入队列中。
  Input:输入一个四则运算表达式（即input)，用于符号和数的提取。
  Output:当数字的长度大于10时，系统报错。
  Return:将string存入队列后，返回这个队列。
  */
queue<string> Scan::ToStringQueue(string input)
{
	queue<string>q;
	string s;//定义一个空字符串。用于临时储存数或字符，再push到队列中。
	int i;
	int l;
	int d = 0;//用来计数，看计数的长度是否超过十位数。
	l = input.size();
	for (i=0; i<l; i++)
	{
		if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' 
			|| input[i] == '%' || input[i] == '(' || input[i] == ')')
		{   d = 0;//当数的长度不足10位时，停止计数，开始准备对下一个数重新计数。
		
		//要判断字符串s是否为空，若为空，就不用存入队列，否则每次循环都会存入一个空字符串，这会导致输出时会有一行为空。此操作是将数字存入队列中。
			if (!s.empty())
			{
				q.push(s);
				s.clear();//清空字符串s，准备下一次接收
			}
			s = s + input[i];
			q.push(s);//将符号存入队列。
			s.clear();
		}
		else
		{
			s = s + input[i];

			//'.'不做为一个数字计，要分开讨论。
			if (input[i]!='.') 
			{
				d++;
			}
			if (d == 10) 
			{
				break;
			}
		}
	}
	if(d == 10) 
	{
		cout << "ERROR" << endl;//数字长度超过十位时系统报错。
	}
	else
	{

	//当最后面为数字时，剩余的数无法再通过if条件句push到队列中，所以这里还要判断一下s是否为空，并push到队列中。
	if (!s.empty()) 
	{
		q.push(s);
		s.clear();
	}
	}
	return q;
}

 /*
  Description:接收一个队列，并逐个输出，每输出一个换一行。
  Input:传入一个要输出的队列。 
  Output:将队列输出。
  */
void Print::OutstringQueue(queue<string> q)
{
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
}