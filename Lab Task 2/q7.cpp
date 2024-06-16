#include<iostream>
using namespace std;

int main() {
	int a, b, c;


	cout << "Enter number1 : ";
	cin >> a;
	cout << "Enter number2 : ";
	cin >> b;
	cout << "Enter number3 : ";
	cin >> c;

	if (a > b && a > c && b > c)
		cout << c<<"\t" << b << "\t" << a;

	else if (a > b && a > c && b < c)
		cout << b << "\t" << c << "\t" << a;

	else if (b> c && b > a && a > c)
		cout << c << "\t" << a << "\t" << b;

	else if (b > c && b > a && a < c)
		cout << a << "\t" << c << "\t" << b;
	
	else if (c > b && c > a && b > a)
		cout << a << "\t" << b << "\t" << c;

	else if (c > b && c > a && b <a)
		cout << b << "\t" << a << "\t" << c;
	return 0;

	

	
}

