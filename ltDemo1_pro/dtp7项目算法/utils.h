#pragma once
#include<string>

// ƽ������ y = f(x^2)
int square(int x)
{
	int y = x * x;
	return y;
	return x * x;
}

// ��������
int cubeSum(int x, int y)
{
	return pow(x, 3) + pow(y, 3);
}

// ��׳�
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

// �����ַ���
std::string copyStr(std::string str, int n);

// ��ָ��
void increase(int* p)
{
	++(*p);
}
// ������
void increase2(int& p)
{
	++(p);
	cout << "increase-p = " << p << endl;

}