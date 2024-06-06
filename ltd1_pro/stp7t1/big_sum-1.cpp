#include<iostream>
using namespace std;

int main()
{
	string num1 = "1234567";
	string num2 = "111";

	/*string num1 = "32535943020935527435432875";
	string num2 = "9323298429842985843509";*/

	string result;

	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	int carry = 0;

	while (p1>=0 || p2 >= 0 || carry >0)
	{
		int x = (p1 >= 0) ? (num1[p1] - '0') : 0; //  num1[p1]的stringAsics码值 - '0'的Asics码 = num1[p1]的值
		int y = (p2 >= 0) ? (num2[p2] - '0') : 0;

		cout << "p1="<< p1 << "...num1[p1] = " << num1[p1] << "...num1[p1]-0=" << num1[p1] - 0 << endl;
		cout << "p2="<< p2 << "...num2[p2] = " << num2[p2] << "...num2[p2]-0=" << num2[p2] - 0 << endl;
		int sum = x + y + carry;
		result += (sum % 10 + '0');
		carry = sum / 10;

		--p1;
		--p2;

	}

	// 结果需要做翻转
	int i = 0, j = result.size() - 1;
	while (i < j)
	{
		char temp = result[j];
		result[j] = result[i];
		result[i] = temp;

		++i;
		--j;
	}

	cout << num1 << " + " << num2 << endl << endl;
	cout << " = " << result;

	cin.get();

}