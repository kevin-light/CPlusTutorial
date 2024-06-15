#pragma once
#include<string>

// 平方函数 y = f(x^2)
int square(int x)
{
	int y = x * x;
	return y;
	return x * x;
}

// 求立方和
int cubeSum(int x, int y)
{
	return pow(x, 3) + pow(y, 3);
}

// 求阶乘
int factorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= i;
	return result;
}

// 复制字符串
std::string copyStr(std::string str, int n);

// 穿指针
void increase(int* p)
{
	++(*p);
}
// 传引用
void increase2(int& p)
{
	++(p);
	cout << "increase-p = " << p << endl;

}