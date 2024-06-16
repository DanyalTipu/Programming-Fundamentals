#include<iostream>
using namespace std;

int main() {

	 float gross, salary,sales;

	cout << "Enter sales in Rupees = ";
	cin >> sales;

	if (sales >= 0) {

		gross = (sales * 9 / 100);
		salary = 2000 + gross;
		cout << "salary is RS " << salary << endl;

		
	}
	else
		cout << "Sorry, salary cannot be computed";
	return 0;
}