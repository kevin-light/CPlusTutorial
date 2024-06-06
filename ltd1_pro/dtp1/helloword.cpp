#include<iostream>
using namespace std;

//包装好的函数，返回int整数, std 命名空间 /**/
int main() {
	// std::cout << "hello word" << std::endl;
	cout << "hello word" << endl;

	//输入信息
	string name;
	cin >> name ;
	cout << "hello, " << name << endl;
	cin.get(); // 等待键盘输入
	cin.get(); // 等待键盘输入
	return 0;
}