#include<iostream>

using namespace std;
#include "utils.h"

// 声明函数
int square(int x);
string copyStr(string str, int n);

int callCount()
{
	static int cnt = 0;
	//int cnt = 0;
	cout << ++cnt << endl;
	return cnt;
}

void f() { cout << "-1-" << endl; }
void f(int x) { x++;  cout << "-2-" << x << endl; }
void f(int x, int y) { cout << "-3-" << endl; }
void f(double x, double y = 1.5) { cout << "-4-" << endl; }
//void f(double x, double y = 1.5, double z) { cout << "-5-" << endl; }

//有const形参时的重载
void fun(int x);
void fun(const int x);     // int常量做形参，跟不加const等价
void fun2(int* p);
void fun2(int* const p);    // 指针常量做形参，也跟不加const等价

void fun3(int& x) { 
	x++;
	cout << "-5-" << x << endl; }
void fun3(const int& x) {  cout << "-6-" << x << endl; }     // 形参类型是常量引用，这是一个新函数 
void fun4(int* p) {  *p = 100; cout << "-7-" << p << "=*p=" << *p << endl; }
void fun4(const int* p) {  cout << "-8-" << p << endl; }    // 形参类型是指向常量的指针，这是一个新函数

string stuInfo(string name = "", int age = 18, double score = 60)
{
	string info = "学生姓名：" + name + "\t年龄：" +
		to_string(age) + "\t平均成绩：" + to_string(score);

	return info;
}

const string& longerStr(const string& str1, const string& str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}


int main()
{
	string(*fp) (string, int, double) = nullptr;    // 一个函数指针
	const string& (*fp1) (const string&, const string&);
	//string* fp(string, int, double);      // 这是一个函数，返回值为指向string的指针
	fp = &stuInfo;
	fp = stuInfo;

	fp1 = &longerStr;
	fp1 = longerStr;
	cout << (*fp1)("hello", "long world") << endl;
	cout << fp1("hello", "long world") << endl;

	//函数指针作为形参
	void selectStr(const string & s1, const string & s2, const string & fp(const string&, const string&));
	void selectStr(const string & s1, const string & s2, const string & (*fp) (const string&, const string&));
	// 类型别名
	typedef const string& Func(const string&, const string&);    // 函数类型
	typedef const string& (*FuncP)(const string&, const string&);    // 函数指针类型

	//C++ 11提供的decltype函数直接获取类型
	typedef decltype(longerStr) Func2;
	typedef decltype(longerStr)* FuncP2;
	//声明函数指针做形参的新函数
	void selectStr(const string&, const string&, Func);

	// 函数指针作为返回值
	FuncP fun(int);
	//Func fun2(int);      // 错误，不能直接返回函数
	Func* fun2(int);

	// 尾置返回类型
	auto fun3(int) -> FuncP;



	 int x = 15;
	 f(x);
	 cout << "-21-" << x << endl;
	fun3(x);
	cout << "-51-" << x << endl;
	fun4(&x);
	cout << "-81-" << x << endl;

	int n = 0;
	increase2(n);
	//cout << square(3, 2) << endl;
	callCount();
	callCount();
	callCount();
	f(3.14);      // 应该调用哪个函数？

	cin.get();
}

int square(int x, int z)
{
	int y = x * z;
	return y;
}
