#include<iostream>

using namespace std;
#include "utils.h"

// ��������
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

//��const�β�ʱ������
void fun(int x);
void fun(const int x);     // int�������βΣ�������const�ȼ�
void fun2(int* p);
void fun2(int* const p);    // ָ�볣�����βΣ�Ҳ������const�ȼ�

void fun3(int& x) { 
	x++;
	cout << "-5-" << x << endl; }
void fun3(const int& x) {  cout << "-6-" << x << endl; }     // �β������ǳ������ã�����һ���º��� 
void fun4(int* p) {  *p = 100; cout << "-7-" << p << "=*p=" << *p << endl; }
void fun4(const int* p) {  cout << "-8-" << p << endl; }    // �β�������ָ������ָ�룬����һ���º���

string stuInfo(string name = "", int age = 18, double score = 60)
{
	string info = "ѧ��������" + name + "\t���䣺" +
		to_string(age) + "\tƽ���ɼ���" + to_string(score);

	return info;
}

const string& longerStr(const string& str1, const string& str2)
{
	return str1.size() > str2.size() ? str1 : str2;
}


int main()
{
	string(*fp) (string, int, double) = nullptr;    // һ������ָ��
	const string& (*fp1) (const string&, const string&);
	//string* fp(string, int, double);      // ����һ������������ֵΪָ��string��ָ��
	fp = &stuInfo;
	fp = stuInfo;

	fp1 = &longerStr;
	fp1 = longerStr;
	cout << (*fp1)("hello", "long world") << endl;
	cout << fp1("hello", "long world") << endl;

	//����ָ����Ϊ�β�
	void selectStr(const string & s1, const string & s2, const string & fp(const string&, const string&));
	void selectStr(const string & s1, const string & s2, const string & (*fp) (const string&, const string&));
	// ���ͱ���
	typedef const string& Func(const string&, const string&);    // ��������
	typedef const string& (*FuncP)(const string&, const string&);    // ����ָ������

	//C++ 11�ṩ��decltype����ֱ�ӻ�ȡ����
	typedef decltype(longerStr) Func2;
	typedef decltype(longerStr)* FuncP2;
	//��������ָ�����βε��º���
	void selectStr(const string&, const string&, Func);

	// ����ָ����Ϊ����ֵ
	FuncP fun(int);
	//Func fun2(int);      // ���󣬲���ֱ�ӷ��غ���
	Func* fun2(int);

	// β�÷�������
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
	f(3.14);      // Ӧ�õ����ĸ�������

	cin.get();
}

int square(int x, int z)
{
	int y = x * z;
	return y;
}
