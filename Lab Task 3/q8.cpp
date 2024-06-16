#include<iostream>
using namespace std;

int main() {

	float hours, pay, rate, grosspay, c,a;

	cout << "Enter hours worked = ";
	cin >> hours;

	cout << "Enter hourly rate of employee =";
	cin >> rate;

	if (hours >= 40) {
		a = hours - 40;
		pay = 40 * rate;
		c = a * rate;
		grosspay = (pay + c) + c / 2;
		cout << "Salary is RS" << grosspay;
	}

}