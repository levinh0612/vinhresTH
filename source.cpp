#include <iostream>
using namespace std;
int hieu(int a, int b){
	return a-b;
};
int tong(int a, int b){
	return a+b;
};

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	int hieuSo = hieu(a,b);
	cout <<"Hieu la:"<<hieuSo;
	int tongSo = tong(a,b);
	cout <<"Tong la:"<<tongSo;
	system("pause");
	return 0;
}