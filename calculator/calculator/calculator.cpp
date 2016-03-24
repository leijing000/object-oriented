/*
  Description:该函数接收一个四则运算表达式，并逐个字符扫描这个表达式，
              将数字和符号提取出来，得到一组string。将这些string存入队列中。
  Input:输入一个四则运算表达式（即input)，用于符号和数的提取。
  Output:当数字的长度大于10时，系统报错。
  Return:将string存入队列后，返回这个队列。
  */
#include"Calculator.h"

queue<string> Scan::ToStringQueue(string input)
{
    queue<string>que;
    string str;
    int i;
    int count = 0;//用来计数，看计数的长度是否超过十位数。
	int lenth;

    lenth = input.size();

    for (i = 0; i < lenth; i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' 
            || input[i] == '%' || input[i] == '(' || input[i] == ')')
        {   
			count = 0;//当数的长度不足10位时，停止计数，开始准备对下一个数重新计数。
    
            //要判断字符串s是否为空，若为空，就不用存入队列，否则每次循环都会存入一个空字符串，这会导致输出时会有一行为空。此操作是将数字存入队列中。
            if (!str.empty())
            {
                que.push(str);
                str.clear();
            }
            str = str + input[i];
            que.push(str);
            str.clear();
        }
        else
        {
            str = str + input[i];
            if (input[i]!='.') 
            {
                count++;
            }
            if (count == 10) 
            {
                break;
            }
        }
    }

    if (count == 10) 
    {
        cout << "ERROR" << endl;//数字长度超过十位时系统报错。
    }
    else
    {

        //当最后面为数字时，剩余的数无法再通过if条件句push到队列中，所以这里还要判断一下str是否为空，并push到队列中。
        if (!str.empty()) 
        {
            que.push(str);
            str.clear();
        }
    }

    return que;
}

void Print::OutstringQueue(queue<string> que)
{
    while (!que.empty())
    {
        cout << que.front() << endl;
        que.pop();
    }
}