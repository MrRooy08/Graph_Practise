#include "thuvien.h"

int main()
{
	MaTranKe a;
	bool isRunning = true;
	int choice;
	danhSachCanh dsc;
	danhSachDinh dsd;
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
			break;
		case 2:
			system("cls");
			docFile("doThiVoHuong.txt", a);
			xuatMaTran(a);
			break;
		case 3:
			system("cls");
			docFile("doThiTrongSo.txt", a);
			xuatMaTran(a);
			break;
		case 4:
			system("cls");
			cout << "\n Ghi File ";
			ghiFile("ghiFile.txt", a);
			xuatMaTran(a);
			break;
		case 5:
			system("cls");
			int temp,dinh;
			cout << "\n Nhap Dinh Ban Muon Tinh ";
			cin >> dinh;
			temp = tinhBacVaoDTCoHuong(a, dinh);
			cout << "\n Bac Vao Cua Dinh " << dinh << "La: " << temp;
			break;
		case 6:
			system("cls");
			cout << "\n Nhap Dinh Ban Muon Tinh ";
			cin >> dinh;
			temp = tinhBacRaDTCoHuong(a, dinh);
			cout << "\n Bac Ra Cua Dinh " << dinh << "La: " << temp;
			break;
		case 7:
			system("cls");
			dsc = tapCanhDoThi(a);
			printDsCanh(dsc);
			break;
		case 8:
			system("cls");
			dsc = traVeTapCanhX(a, 0);
			printDsCanh(dsc);
			break;
		case 9:
			system("cls");
			dsd = traVeDinhKeCuaDinhX(a, 0);
			printDsDinh(dsd);
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