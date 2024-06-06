#include <iostream>
using namespace std;

int main () {
    // 前置时，对象先加1，再将更新之后的对象值作为结果返回；
    // 后置时，对象先将原始值作为结果返回，再加1；
    int a = 0;
    long int i1 = 0;
    i1 = 3;
    ++i1;

    cout << "a++ = " << a++ << endl;  // a++=0
    cout << "a++ = " << ++a << endl;    // ++a=1
    cout << "++i = " << i1 << endl;
    a += 1 ;
    cout << "a+1 = " << a << endl;
    

    // 短路求值
    int i = 0;
    1 < 2 && ++i;				 // false
	cout << " i1 = " << i << endl;       // i = 1
	    int i3 = 0;
    1 < 2 || ++i3;				 // true
	cout << " i2 = " << i3 << endl;       // i = 0
    // 条件判断表达式 ? 表达式1 : 表达式2
    cout << (1<2 && ++i)? true : false << endl;



    cin.get();

}