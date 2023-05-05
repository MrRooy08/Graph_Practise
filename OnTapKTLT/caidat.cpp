#include "thuvien.h"

int docFile(const char* filename, MaTranKe &a)
{
	FILE* f;
	fopen_s(&f, filename, "rt");
	if (f == NULL) return 1;
	fscanf_s(f, "%d", &a.n);
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < a.n; j++)
		{
			fscanf_s(f, "%d", &a.mt[i][j]);
		}
	}
	fclose(f);
	return 1;
}

int ghiFile(const char* filename, MaTranKe &a)
{
	FILE* f;
	fopen_s(&f, filename, "wt");
	if (f == NULL) return 1;
	fprintf(f, "%d", a.n);
	for (int i = 0; i < a.n; i++)
	{
		fprintf(f, "\n");
		for (int j = 0; j < a.n; j++)
			fprintf(f, "%d\t", a.mt[i][j]);
	}
	fclose(f);
	return 1;
}

void xuatMaTran(MaTranKe a)
{
	cout << "\n Gia Tri Trong File La: ";
	cout << "\n" << a.n << "\n";
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < a.n; j++)
			cout << a.mt[i][j] << " ";
		cout << "\n";
	}
}

int tinhBacVaoDTCoHuong(MaTranKe a, int dinh)
{
	int dem = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.mt[i][dinh] != 0)
			dem++;
	}
	return dem;
}

int tinhBacRaDTCoHuong(MaTranKe a, int dinh)
{
	int dem = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.mt[dinh][i] != 0)
			dem++;
	}
	return dem;
}

void printCanh(Canh c)
{
	cout << "(" << (char)(c.dinhDau + 65) << "," << (char)(c.dinhCuoi + 65) << ")";
}

void printDsCanh(danhSachCanh ds)
{
	for (int i = 0; i < ds.n; i++)
	{
		printCanh(ds.ds[i]);
	}
}

void printDinhKe(Canh v)
{
	cout << (char)(v.dinhCuoi + 65);
}

void printDsDinh(danhSachDinh dsV)
{
	for (int i = 0; i < dsV.n; i++)
	{
		 printDinhKe(dsV.dsDinh[i]);
	}
}

danhSachCanh tapCanhDoThi(MaTranKe a)
{
	danhSachCanh arrV;
	arrV.n = 0;
	for (int i = 0; i < a.n; i++)
	{
		for (int j = 0; j < a.n; j++)
		{
			if (a.mt[i][j] != 0)
			{
				Canh canh;
				canh.dinhDau = i;
				canh.dinhCuoi = j;
				canh.trongSo = a.mt[i][j];
				arrV.ds[arrV.n++] = canh;
			}
		}
	}
	return arrV;
}

danhSachCanh traVeTapCanhX(MaTranKe a, int dinh)
{
	danhSachCanh arrV;
	arrV.n = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.mt[dinh][i] != 0)
		{
			Canh canh;
			canh.dinhDau = dinh;
			canh.dinhCuoi = i;
			canh.trongSo = a.mt[dinh][i];
			arrV.ds[arrV.n++] = canh;
		}
	}
	return arrV;
}

danhSachDinh traVeDinhKeCuaDinhX(MaTranKe a, VERTEX dinh)
{
	danhSachDinh arrV;
	arrV.n = 0;
	for (int i = 0; i < a.n; i++)
	{
		if (a.mt[dinh][i] != 0)
		{
			Canh t;
			t.dinhDau = dinh;
			t.dinhCuoi = i;
			t.trongSo = a.mt[dinh][i];
			arrV.dsDinh[arrV.n++] = t;
		}
	}
	return arrV;
}

danhSachDinh timDinhKeCoTrongSoLonNhatCuaDinhX(MaTranKe a, VERTEX dinh)
{
	danhSachDinh arrV,arrTemp;
	arrTemp.n;
	arrV = traVeDinhKeCuaDinhX(a, dinh);
	for (int i = 0; i < arrV.n; i++)
	{
		
	}
}

void displayMenu()
{
	cout << "\n============================= ";
	cout << "\n\n\t\t1. Doc File DTCH ";
	cout << "\n\n\t\t2. Doc File DTVH ";
	cout << "\n\n\t\t3. Doc File DT Co Trong So ";
	cout << "\n\n\t\t4. Ghi File ";
	cout << "\n\n\t\t5. Tinh bac vao dt co huong ";
	cout << "\n\n\t\t6. Tinh bac ra dt co huong ";
	cout << "\n\n\t\t7. Tra Ve Cac Tap Canh Cua Do Thi. ";
	cout << "\n\n\t\t8. Tra Ve Tap Canh X Cua Do Thi. ";
	cout << "\n\n\t\t9. Tra Ve Dinh Ke Cua Dinh X Do Thi. ";
	cout << "\n\n\t\t0. Dung Lai ";
	cout << "\n============================= ";
}