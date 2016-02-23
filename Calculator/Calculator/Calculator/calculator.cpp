#include"Calculator.h"
 
  /*
  Description:�ú�������һ������������ʽ��������ַ�ɨ��������ʽ��
              �����ֺͷ�����ȡ�������õ�һ��string������Щstring��������С�
  Input:����һ������������ʽ����input)�����ڷ��ź�������ȡ��
  Output:�����ֵĳ��ȴ���10ʱ��ϵͳ����
  Return:��string������к󣬷���������С�
  */
queue<string> Scan::ToStringQueue(string input)
{
	queue<string>q;
	string s;//����һ�����ַ�����������ʱ���������ַ�����push�������С�
	int i;
	int l;
	int d = 0;//�����������������ĳ����Ƿ񳬹�ʮλ����
	l = input.size();
	for (i=0; i<l; i++)
	{
		if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' 
			|| input[i] == '%' || input[i] == '(' || input[i] == ')')
		{   d = 0;//�����ĳ��Ȳ���10λʱ��ֹͣ��������ʼ׼������һ�������¼�����
		
		//Ҫ�ж��ַ���s�Ƿ�Ϊ�գ���Ϊ�գ��Ͳ��ô�����У�����ÿ��ѭ���������һ�����ַ�������ᵼ�����ʱ����һ��Ϊ�ա��˲����ǽ����ִ�������С�
			if (!s.empty())
			{
				q.push(s);
				s.clear();//����ַ���s��׼����һ�ν���
			}
			s = s + input[i];
			q.push(s);//�����Ŵ�����С�
			s.clear();
		}
		else
		{
			s = s + input[i];

			//'.'����Ϊһ�����ּƣ�Ҫ�ֿ����ۡ�
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
		cout << "ERROR" << endl;//���ֳ��ȳ���ʮλʱϵͳ����
	}
	else
	{

	//�������Ϊ����ʱ��ʣ������޷���ͨ��if������push�������У��������ﻹҪ�ж�һ��s�Ƿ�Ϊ�գ���push�������С�
	if (!s.empty()) 
	{
		q.push(s);
		s.clear();
	}
	}
	return q;
}

 /*
  Description:����һ�����У�����������ÿ���һ����һ�С�
  Input:����һ��Ҫ����Ķ��С� 
  Output:�����������
  */
void Print::OutstringQueue(queue<string> q)
{
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
}