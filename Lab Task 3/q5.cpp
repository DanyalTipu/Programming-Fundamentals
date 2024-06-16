#include<iostream>

using namespace std;

int main() {

	int a, b, c;
	cout << "Enter number 1 : ";
	cin >> a;
	cout << "Enter number 2 : ";
	cin >> b;
	cout << "Enter number 3 : ";
	cin >> c;

	if (a > b && a > c) {
		if (b > c)
			cout << a << "\t" << b << "\t" << c;
		else
			cout << a << "\t" << c << "\t" << b;
	}

	if (b > a && b> c) {
		if (a > c)
			cout << b<<"\t" << a<<"\t" << c;
		else
			cout << b<<"\t" << c<<"\t" << a;
	}

	if (c > a && c > b) {
		if (a > b)
			cout << c << "\t" << a << "\t" << b;
		else
			cout << c << "\t" << b << "\t" << a;
	}
}