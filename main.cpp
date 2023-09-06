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
			cout << "íåò ðåøåíèÿ";
		}
		if (c == 0) {
			cout << "ëþáîé x";
		}
	}
	else {
		cout << -c / b;
	}
	return 0;
}
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	int c;
	double d;
	double x1;
	double x2;
	
	cin >> a;
	cin >> b;
	cin >> c;
	d = pow(b,2)-4*a*c;
	if (d == 0) {
	    cout << -b/2*a;
	}
	if (d > 0){
	    cout << (-b+pow(d,0.5)) / (2*a); cout << " "; cout << (-b-pow(d,0.5)) / (2*a);
	}
	else{
	    cout << "нет корней";
	}

	return 0;
}
