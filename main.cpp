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

#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string l;
	string sht;
	string day;
	cout << "Включена ли лампа да/нет"; cout<< endl; cin >> l;
	cout << "День или ночь день/ночь"; cout<< endl; cin >> day;
	cout << "Шторы открыты или нет открыты/закрыты"; cout<< endl; cin >> sht;

	if (((l == "да") && (sht == "закрыты") && (day == "ночь")) || ((l == "нет") && (sht == "открыты") && (day == "день")) || ((l == "да") && (sht == "открыты") && (day == "день")) || ((l == "да") && (sht == "закрыты") && (day == "день"))) {
	
	    cout << "светло";
	}
	else{
	    cout << "темно";
	}
}
----------------------------------------------------
2
----------------------------------------------------
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	double a;
	cin >> x;
	cin >> a;
	if (abs(x) < 1){
	    cout << a*log(abs(x));
	}
	if ((abs(x) >= 1) && (a-pow(x,2))>=0){
	    cout << pow(a-pow(x, 2), 0.5);
	}
	else{
	    cout << "нет корней";
	}
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
	double y;
	double b;
	cin >> x;
	cin >> y;
	cin >> b;
	if ((b - y > 0) && ((b-x)>=0)){
	    cout << log(b - y) * sqrt(b - x);
	}
	else{
	    cout << "нет корней";
	}
}
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	cin >> x;
	int y = x;
	for (x; x < y+10; x++){
	    cout << x << " ";
	}
}
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double x=-4;
	for (x; x <= 4; x+=0.5){
	    cout << x << ";";
	    if (x != 1){
	        cout << ((pow(x, 2)-2*x+2)/(x-1)) << endl;
	    }
	    else{
	        cout << "корней нет" << endl;
	    }
	}
}
--------------------------------------------------------------
3
--------------------------------------------------------------
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double s;
	double p;
	double n;
	cin >> s;
	cin >> p;
	cin >> n;
	double r = p/100.0;
	cout << ((s*r*pow((1+r), n)) / (12*(pow((1+r), n)-1)));
}
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
    double p1, s1, n1, m1, m;
    float r1;
    cin >> s1;
    cin >> m1;
    cin >> n1;
    if (s1 <= 0 || n1 <= 0 || m1 <= 0) {
	    cout << "-" << endl;
    }
    else {
	    for (p1 = 1; p1 < 100; p1++) {
		    r1 = float(p1 / 100);
		    m = (s1 * r1 * pow(1 + r1, n1)) / (12 * (pow(1 + r1, n1) - 1));
		    if (abs(m1 - m) < 0.01) {
			    cout << "% " << p1 << endl;
			    break;
		    }
		    else {
			    continue;
		    }
	    }
	}
}
cout << " " << endl;
#include <iostream>
#include <clocale>
#include <fstream>

using namespace std;
int main () {
    setlocale(LC_ALL, "Russian");
    ofstream fout("cppstudio.txt");
    fout << "Работа с файлами в С++";
    fout.close();
    ifstream f("cppstudio.txt"); 
    char buff[100];
    f.getline(buff, 100);
    f.close();
    cout << buff;

}
#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
using namespace std;
int main () {
    setlocale(LC_ALL, "Russian");
    string a = "0123456789";
    string b = "";
    string l = "";
    char c;
    ofstream fout("cppstudio.txt");
    fout << "hg25g5g9gfg47567";
    fout.close();
    ifstream f("cppstudio.txt"); 
    char buff[20];
    f.getline(buff, 20);
    f.close();
    b = buff;

    int i = 0;
    for(i; i <= int(b.length()); i++){
        if (a.find(b[i]) != string::npos) {
            l += b[i];
        }
    }
    cout << l;

}
#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
using namespace std;
int main() {
string str = "aafefhcvsaehfrefbheirufhwqiufgwiurfgwiurfgwlriuyfgwieurfs";
	int Length = str.length();
	for (int i = 0; i < Length; i++)
	{
		for (int j = i + 1; j < Length; j++)
		{
			if (str[i] > str[j])
			{
				char temporary = str[i];
				str[i] = str[j];
				str[j] = temporary;
			}
		}
	}
	cout << "Отсортированная строка: " << str << endl;
}
------------------------------
#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
using namespace std;
int main () {
    setlocale(LC_ALL, "Russian");
    string a = "0123456789";
    string b = "";
    string l = "";
    int  in = 0;
    int cou = 0;
    int su = 0;
    int ch = 0;
    char c;
    ofstream fout("cppstudio.txt");
    for (int i = 0; i < 10; i++)
    {
        cin >> cou;
        fout << cou << endl;
    }
    fout.close();
    ifstream f("cppstudio.txt"); 
    for(in; in < 10; in++){
        f >> ch;
        su+=ch;
    }
    f.close();
    cout << su;  
}
#include <iostream>

using namespace std;
void znak(int n){
    if (n > 0){
        cout << 1;
    }
    if (n == 0){
        cout << 1;
    }
    if (n < 0){
        cout << 1;
    }
}
int main()
{
    int a;
    cin >> a;
    znak(a);
}
