#include <iostream>
using namespace std;

int main (){
    // ��ȡ���鳤��
    int a[] = {1,2,3,4,5,6,7};
    cout << "a����ռ�ÿռ��С " << sizeof(a) << endl;
    cout << "a����mÿ��Ԫ��ռ�ÿռ��С " << sizeof(a[0]) << endl;
    int aSize = sizeof(a)/sizeof(a[0]);
    cout << "a����ĳ��ȣ� " << aSize << endl;

    for (int i=0; i<aSize; i++) {
        cout << "a[" <<i <<"]= " << a[i] << endl;
    }

    for (int num : a) {
        cout << "num:" << num << endl;
    }

    // ��ȡ��ά���鳤��
    int am[2][3] = { 
        {0, 1}, 
        {2, 3},
        {4, 5},
        }


    cin.get();
}