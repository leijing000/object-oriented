/*
  Description:�ú�������һ������������ʽ��������ַ�ɨ��������ʽ��
              �����ֺͷ�����ȡ�������õ�һ��string������Щstring��������С�
  Input:����һ������������ʽ����input)�����ڷ��ź�������ȡ��
  Output:�����ֵĳ��ȴ���10ʱ��ϵͳ����
  Return:��string������к󣬷���������С�
  */
#include"Calculator.h"

queue<string> Scan::ToStringQueue(string input)
{
    queue<string>que;
    string str;
    int i;
    int count = 0;//�����������������ĳ����Ƿ񳬹�ʮλ����
	int lenth;

    lenth = input.size();

    for (i = 0; i < lenth; i++)
    {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' 
            || input[i] == '%' || input[i] == '(' || input[i] == ')')
        {   
			count = 0;//�����ĳ��Ȳ���10λʱ��ֹͣ��������ʼ׼������һ�������¼�����
    
            //Ҫ�ж��ַ���s�Ƿ�Ϊ�գ���Ϊ�գ��Ͳ��ô�����У�����ÿ��ѭ���������һ�����ַ�������ᵼ�����ʱ����һ��Ϊ�ա��˲����ǽ����ִ�������С�
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
        cout << "ERROR" << endl;//���ֳ��ȳ���ʮλʱϵͳ����
    }
    else
    {

        //�������Ϊ����ʱ��ʣ������޷���ͨ��if������push�������У��������ﻹҪ�ж�һ��str�Ƿ�Ϊ�գ���push�������С�
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