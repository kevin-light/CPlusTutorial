#include<iostream>
using namespace std;

int main2()
{
	int a = 12;
	int b = 100;

	cout << "a = " << a << "a�ĵ�ַ=" << &a << endl;
	int* p = &a;           // p��ָ��b��ָ��
	cout << "p1 = " << p << endl;

	p = &a;    // pָ����a
	cout << "p2 = " << p << endl;

	p = &a;    // p��ָ��a��ָ��
	cout << "pָ����ڴ��У���ŵ�ֵΪ��" << *p << endl;

	//*p = 25;    // ��p��ָ��Ķ���a�����޸�Ϊ25
	//cout << "a = " << a << endl;

	int i = 1024;
	int* pi = &i;        // pi��һ��ָ�룬ָ��int���͵�����
	int** ppi = &pi;     // ppi��һ������ָ�룬ָ��һ��int* ���͵�ָ��

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
	cout << "vp�ĳ���Ϊ�� " << sizeof(vp) << endl;
	//cout << "*vp = " << *vp << endl;    // ���󣬲���ͨ��void *ָ����ʶ���

	int  j = 28;
	int* ptr = &i;    // ptr��һ��ָ�룬ָ��int���Ͷ���
	int*& pref = ptr;    // pref��һ�����ã���ָ��ptr

	cout << "ptr = " << ptr << endl;
	cout << "pref = " << pref << endl;

	pref = &j;           // ��ָ��ptrָ��j
	cout << "pref2 = " << ptr << endl;
	*pref = 20;           // ��j��ֵ��Ϊ20

	cout << "pref3 = " << pref << endl;



	cin.get();

	return 0;
}
