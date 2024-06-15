#include "common.h"
#include "account_item.h"

int main() {
	// 1,�����ļ�����
	vector<AccountItem> items;
	loadDataFromFile(items);

	bool quit = false;
	while (!quit)
	{
		showMainMenu();

		//��ȡ����ѡ��
		char key = readMenuSelection(3); // char����int�ã�int���ַ��������Ĺ���

			switch (key)
			{
			case '1':   // 1 - ����
				showAccountingMenu();
				accounting(items);
				break;
			case '2':   // 2 - ��ѯ
				showQueryMenu();
				query(items);
				break;
			case '3':   // 3 - �˳�
				cout << "\nȷ���˳��� (Y/N): ";
				if (readQuitConfirm() == 'Y')
					quit = true;
				break;

			default:
				break;
			}

			cout << endl;

	}
}