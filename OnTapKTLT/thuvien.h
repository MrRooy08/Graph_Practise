#include <iostream>
using namespace std;

const int MAX = 20;

typedef int VERTEX;

struct MaTranKe
{
	int mt[MAX][MAX];
	int n;
};

struct Canh
{
	int dinhDau;
	int dinhCuoi;
	int trongSo;
};

struct danhSachCanh
{
	int n;
	Canh ds[MAX];
};

struct danhSachDinh
{
	int n;
	Canh dsDinh[MAX];
};

int docFile(const char* filename, MaTranKe &a);

int ghiFile(const char* filename, MaTranKe &a);

void xuatMaTran(MaTranKe a);

int tinhBacVaoDTCoHuong(MaTranKe a, int dinh);

int tinhBacRaDTCoHuong(MaTranKe a, int dinh);

danhSachCanh tapCanhDoThi(MaTranKe a);

danhSachCanh traVeTapCanhX(MaTranKe a, int dinh);

void printCanh(Canh c);

void printDsDinh(danhSachDinh dsV);

void printDsCanh(danhSachCanh ds);

void printDinhKe(Canh v);

danhSachDinh traVeDinhKeCuaDinhX(MaTranKe a, VERTEX dinh);

void displayMenu();