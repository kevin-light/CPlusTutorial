#include<iostream>
using namespace std;

//包装好的函数，返回int整数, std 命名空间 /**/
int main() {
	// 除法
	int a = 20, b = 6;
	cout << " a / b = " << a / b << endl;
	cout << " -a / b = " << -a / b << endl;    // 负数向0取整
	float a2 = 20;
	cout << " a2 / b = " << a2 / b << endl;

	// 取模
	cout << " a % b = " << a % b << endl;
	cout << " -a % b = " << -a % b << endl;

}