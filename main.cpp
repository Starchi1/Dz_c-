#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double b;
	double c;
	cin >> b;
	cin >> c;
	if (b == 0) {
		if (c != 0) {
			cout << "��� �������";
		}
		if (c == 0) {
			cout << "����� x";
		}
	}
	else {
		cout << -c / b;
	}
	return 0;
}