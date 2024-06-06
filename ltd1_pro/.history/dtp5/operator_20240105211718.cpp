#include <iostream>
using namespace std;

int main () {
    // 前置时，对象先加1，再将更新之后的对象值作为结果返回；
    // 后置时，对象先将原始值作为结果返回，再加1；
    int a = 0;
    long int i1 = 0;
    a++;
    i1 = 3;

    cout << "a++ = " << a << endl;
    cout << "++i = " << i1 << endl;
    a += 1 ;
    cout << "a+1 = " << a << endl;
    

    cin.get();

}