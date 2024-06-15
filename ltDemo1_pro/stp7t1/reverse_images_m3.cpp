#include<iostream>
using namespace std;

int main3()
{
	const int n = 4;
	int image[n][n] = {
	  { 5, 1, 9, 11},
	  { 2, 4, 8, 10},
	  { 13, 3, 6, 7},
	  { 15, 14, 12, 16}
	};

	// ����ת��
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			// �ԶԽ���Ϊ�Գ��ᣬ���߻���
			int temp = image[i][j];
			image[i][j] = image[j][i];
			image[j][i] = temp;
		}
	}

	// ÿһ�з�ת
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n / 2; j++)
		{
			int temp = image[i][j];
			image[i][j] = image[i][n - j - 1];
			image[i][n - j - 1] = temp;
		}
	}

	// ��ӡ���
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << image[i][j] << "\t";
		}
		cout << endl;
	}

	cin.get();
	return 0;
}
