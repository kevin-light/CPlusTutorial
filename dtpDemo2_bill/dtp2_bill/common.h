#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

#define FILENAME "D:\\FF\\learning\\CPP\\dtproj\\dtp2_bill\\AccountBook.txt" // #define ��c���Ե�ȫ�ֶ��峣�����궨�壨ȫ��д��ĸ��
#define INCOME "����"
#define EXPAND "֧��"

using namespace std;

// ͨ�ù����Ժ�������
// ���Ʋ˵��ĺ���
void showMainMenu();
void showAccountingMenu();
void showQueryMenu();

// ��ȡ����������кϷ���У��ĺ���
char readMenuSelection(int options);
char readQuitConfirm();
int readAmount();