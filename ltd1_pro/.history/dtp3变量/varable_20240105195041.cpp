#include<iostream>
using namespace std;

int main()
{
	////�������
	//int a = 1, b;
	//cout << "a = " << a << endl;

	//b = 10;
	//cout << "b = " << b << endl;
	//cin.get();

	//v2
	//short a = 36768;    // a = -36767;   ���������������Сֵ�����в��룬 short -36767 - 36768 
	unsigned short a = 1;
	cout << "a = " << a << endl;
	cout << "a is sizeof:  = " << sizeof(a) << endl;
	int b;
	cout << "b sizef := " << sizeof(b) << endl;
	long c;
	cout << "c sizef := " << sizeof(c) << endl;

	long long d1;
	cout << "d1 sizef := " << sizeof(d1) << endl;
	// �޷���char
	char c1 = 65;
	cout << "c1 = " << c1 << endl; // c1=A
	cout << "c+1 = " << c1+1 << endl; // c1+1=66
	char c2 = c1 + 1;
	cout << "c2 = " << c2 << endl; // c=B

	// ��������
	bool b1 = true;
	cout << "b1 = " << b1 << endl;  // b = 1
	cout << "b1 sizef := " << sizeof(b1) << endl;
	// ��������
	float f = 2.5;
	double d = 3.792 - 23;
	cout << "f = " << f << endl;
	cout << "d = " << d << endl;

	// �ַ�����
	'Q';
	'a';
	"abc";
	"\'";

	// ����ת��
	int i1 = 3.99;
	cout << "i1c= " << i1 << endl;

	// ������Χ
	// unsigned short ut = 65536;
	// cout << "ut = " << ut << endl;
	short st = 32768;
	cout << "st = " << st << endl;






	cin.get();

}