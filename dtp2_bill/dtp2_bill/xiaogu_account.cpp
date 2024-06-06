#include "common.h"
#include "account_item.h"

int main() {
	// 1,加载文件数据
	vector<AccountItem> items;
	loadDataFromFile(items);

	bool quit = false;
	while (!quit)
	{
		showMainMenu();

		//读取键盘选择
		char key = readMenuSelection(3); // char比用int好，int有字符串传换的过程

			switch (key)
			{
			case '1':   // 1 - 记账
				showAccountingMenu();
				accounting(items);
				break;
			case '2':   // 2 - 查询
				showQueryMenu();
				query(items);
				break;
			case '3':   // 3 - 退出
				cout << "\n确认退出？ (Y/N): ";
				if (readQuitConfirm() == 'Y')
					quit = true;
				break;

			default:
				break;
			}

			cout << endl;

	}
}