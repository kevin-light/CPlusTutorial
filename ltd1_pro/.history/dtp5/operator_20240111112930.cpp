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
    cout << ((1<2 && ++i)? "true" : "false") << endl;

    // 位移运算
    unsigned char bits = 0xb5; //
    cout << hex;  //后面输出16进制
    cout << "bits<<2 = " << (bits << 2) << endl;
    cout << "bits<<32 = " << (bits << 32) << endl;
    cout << "bits<<34 = " << (bits << 34) << endl;   // 取余数和 <<2 相同

    cout << dec; //oct;
    cout << (1 << 2) << endl; // =4
    cout << (100 << 2) << endl; // 100 平方

    // 隐士类型转换
    short s = 1.2 + 2;
    cout << "s = " << s << endl;
    cout << "1.2 +2 = " << 1.2+2 << endl;
    cout << "s length = " << sizeof(s) << endl;
    cout << "1.2 length = " << sizeof(1.2+2) << endl;


    cin.get();

}