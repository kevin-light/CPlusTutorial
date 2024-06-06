#include<iostream>
using namespace std;

int main2()
{
	int a = 12;
	int b = 100;

	cout << "a = " << a << "a的地址=" << &a << endl;
	int* p = &a;           // p是指向b的指针
	cout << "p1 = " << p << endl;

	p = &a;    // p指向了a
	cout << "p2 = " << p << endl;

	p = &a;    // p是指向a的指针
	cout << "p指向的内存中，存放的值为：" << *p << endl;

	//*p = 25;    // 将p所指向的对象（a），修改为25
	//cout << "a = " << a << endl;

	int i = 1024;
	int* pi = &i;        // pi是一个指针，指向int类型的数据
	int** ppi = &pi;     // ppi是一个二级指针，指向一个int* 类型的指针

	cout << "pi = " << pi << endl;
	cout << "* pi = " << *pi << endl;
	cout << "ppi = " << ppi << endl;
	cout << "* ppi = " << *ppi << endl;
	cout << "** ppi = " << **ppi << endl;


	//int i = 10;
	string s = "hello";

	void* vp = &i;
	vp = &s;
	cout << "vp = " << vp << endl;
	cout << "vp的长度为： " << sizeof(vp) << endl;
	//cout << "*vp = " << *vp << endl;    // 错误，不能通过void *指针访问对象

	int  j = 28;
	int* ptr = &i;    // ptr是一个指针，指向int类型对象
	int*& pref = ptr;    // pref是一个引用，绑定指针ptr

	cout << "ptr = " << ptr << endl;
	cout << "pref = " << pref << endl;

	pref = &j;           // 将指针ptr指向j
	cout << "pref2 = " << ptr << endl;
	*pref = 20;           // 将j的值变为20

	cout << "pref3 = " << pref << endl;



	cin.get();

	return 0;
}
