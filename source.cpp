#include <iostream>
using namespace std;

int tong(int a, int b){return a+b;}
int hieu(int a, int b){return a - b;}
int tich(int a, int b){return a * b;}
double thuong(int a, int b);
bool chanle(int a){if(a%2==0} return 1; return 0;}

int main()
{
	int a, b;
	cout << "Nhap so nguyen a: ";
	cin >> a;
	cout << "Nhap so nguyen b: ";
	cin >> b;
	cout << "KQ: "<<tong(a,b);
	cout << "KQ: "<<hieu(a,b);
	cout << "KQ: "<<tich(a,b);
	if(chanle(a)==1) cout<< "chan";
	else cout << "le";
	system("pause");
	return 0;
}
