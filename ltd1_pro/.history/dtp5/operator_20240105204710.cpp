#include <iostream>
using namespace std;

void main(){
    // 前置时，对象先加1，再将更新之后的对象值作为结果返回；
    // 后置时，对象先将原始值作为结果返回，再加1；
    int a = 0;
    cout << "a++ = " << a++ << endl;
    cout << "a++ = " << a << endl;
    

}