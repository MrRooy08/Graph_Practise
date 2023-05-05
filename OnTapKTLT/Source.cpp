#include "thuvien.h"

int main()
{
	MaTranKe a;
	bool isRunning = true;
	int choice;
	while (isRunning)
	{
		displayMenu();
		cout << "\n Lua Chon 1 So De Thuc Thi: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			docFile("doThiCoHuong.txt", a);
			xuatMaTran(a);
		case 2:
			system("cls");
			docFile("doThiVoHuong.txt", a);
			xuatMaTran(a);
			break;
		case 3:
			system("cls");
			cout << "\n Ghi File ";
			ghiFile("ghiFile.txt", a);
			xuatMaTran(a);
			break;
		case 0:
			isRunning = false;
			break;
		default:
			cout << "\n Lua chon khong hop le. Vui Long Nhap Lai ";
			break;
		}
	}
	return 0;
}