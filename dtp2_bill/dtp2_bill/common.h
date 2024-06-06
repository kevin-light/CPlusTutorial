#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define FILENAME "D:\\FF\\learning\\CPP\\dtproj\\dtp2_bill\\AccountBook.txt" // #define ：c语言的全局定义常量，宏定义（全大写字母）
#define INCOME "收入"
#define EXPAND "支出"

using namespace std;

// 通用功能性函数声明
// 绘制菜单的函数
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

// 读取键盘输入进行合法性校验的函数
char readMenuSelection(int options);
char readQuitConfirm();
int readAmount();