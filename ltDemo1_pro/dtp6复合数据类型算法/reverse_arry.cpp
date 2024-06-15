#include<iostream>
using namespace std;

int main()
{
	const int n = 8;
	int arr[n] = { 1,2,3,4,5,6,7,8 };
	int newArry[n];
	for (int i = 0; i < n; i++) {
		newArry[n - i - 1] = arr[i];
	}

	for (int i = 0; i < n; i++) {
		cout << newArry[i] << "\t";

	}
	cout << endl;
	cin.get();

}