#include <iostream>
using namespace std;

int main (){
    // ��ȡ���鳤��
    int a[] = {1,2,3,4,5,6,7};
    cout << "a����ռ�ÿռ��С " << sizeof(a) << endl;
    cout << "a����mÿ��Ԫ��ռ�ÿռ��С " << sizeof(a[0]) << endl;
    cout << "a����ĳ��ȣ� " << sizeof(a)/sizeof(a[0]) << endl;

    cin.get();
}