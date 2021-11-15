#include <iostream>
using namespace std;

int hieu(int a, int b){return a - b;}
int tong(int a, int b);
int tich(int a, int b);
double thuong(int a, int b);

int main()
{
	int a, b;
	cout << "Nhap so nguyen a: ";
	cin >> a;
	cout << "Nhap so nguyen b: ";
	cin >> b;
	cout << "KQ: "<<hieu(a,b);
	system("pause");
	return 0;
}
