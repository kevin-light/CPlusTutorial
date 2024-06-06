#include <iostream>
using namespace std;

int main (){
    // 获取数组长度
    int a[] = {1,2,3,4,5,6,7};
    cout << "a数组占用空间大小 " << sizeof(a) << endl;
    cout << "a数组m每个元素占用空间大小 " << sizeof(a[0]) << endl;
    int aSize = sizeof(a)/sizeof(a[0]);
    cout << "a数组的长度： " << aSize << endl;

    for (int i=0; i<aSize; i++) {
        cout << "a[" <<i <<"]= " << a[i] << endl;
    };

    for (int num : a) {
        cout << "num:" << num << endl;
    };

    // 获取多维数组长度
    int am[2][3] = { 
        {0, 1, 4}, 
        {2, 3, 5}
    };

    int rowCnt = sizeof(am)/ sizeof(am[0]);
    int cloCnt = sizeof(am[0]) / sizeof(am[0][0]);

    for (int i=0; i<rowCnt; i++){
        for (int j=0; j<cloCnt; j++) {
            cout << am[i][j] << "\t" ;
        };
        cout << endl;
    };

    for (auto& row : am){
        for (auto num : row){
            cout << num << "\t" ;
        };
        cout << endl;
    };


    cin.get();
}