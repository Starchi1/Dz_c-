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
----------------------------------
	4
----------------------------------
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
#include <cstring>
using namespace std;
void znak(int n){
    if (n > 0){
        cout << 1;
    }
    if (n == 0){
        cout << 0;
    }
    
    if (n < 0){
        cout << -1;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    znak(a);
}
#include <iostream>
using namespace std;
double crug(){
    setlocale(LC_ALL, "Russian");
    double n;
    double s;
    cout << "ВВедите R "; 
    cin >> n;
    s = 3.14*n*n;
    return s;
}
double primoug(){
    setlocale(LC_ALL, "Russian");
    double s;
    double a, b;
    cin >> a;
    cin >> b;
    s = a*b;
    return s;
}
double triug(){
    setlocale(LC_ALL, "Russian");
    double s;
    double A;
    double H;
    cin >> A;
    cin >> H;
    s = 0.5*A*H;
    return s;
}
int main()
{   
    setlocale(LC_ALL, "Russian");
    int x;
    std::cin >> x;
    switch(x)
    {
        case 1: 
            cout<< crug();
            break;
            
        case 2: 
            cout<< primoug();
            break;
        case 3: 
            cout<< triug();
            break;
        default: 
            std::cout << "x is undefined" << "\n";
    }
}
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int N = 23;
    int i = 0;
    int l = 0;
    int k = 0;
    string mass[N] = {"*","*","*","*","*","*","*","*","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_"};
    string mas[N] = {"_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_","_"};
    for(k; k < 9; k++){
        if (k <= 4){
            for(i; i < N; i++){
                cout << mass[i];
            }
            i = 0;
            cout << endl;
        }
        if (k > 4){
            for(l; l < N; l++){
                cout << mas[l];
            }
            l = 0;
            cout << endl;
        }
    }
}
#include <iostream>
#include <string>
using namespace std;
int romech(char x){
    switch(x){
         case 'I': 
            return 1;
            break;
        case 'V': 
            return 5;
            break;
        case 'X': 
            return 10;
            break;
        case 'L': 
            return 50;
            break;
        case 'C': 
            return 100;
            break;
        case 'D': 
            return 500;
            break;
        case 'M': 
            return 1000;
            break;
        default: 
            return 0;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    string st;
    bool f = true;
    int a = 0;
    cin >> st;
    for (int i =0; i < st.length(); i++){
        if (romech(st[i]) >= romech(st[i+1])){
            a += romech(st[i]);
        }
        if ((romech(st[i]) < romech(st[i+1])) || (st[i] == 'I' || st[i+1] == 'X')){
            a += 9;
            break;
        }
        else{
            f = false;
            break;
        }
    }
    if (f){
    cout << a;
    }
    else{
        cout << "Введите коректноек число";
    }
}
#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int getSin(double x, int d_y = 25) {
    return  (int) ((sin(x) * 10) + d_y/2);
}
void gotoxy(int x, int y) {
    COORD xy;
    xy.X = x;
    xy.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), xy);
}
int main() {
    for (double x = -10; x < 10; x+=0.1) {
        int y = getSin(x);
        if (y <= 1) {
			continue;	
		}
        gotoxy((int) (x * 10), y);
        cout << '*';
    }
    for (int i = 0; i < 120; i++) {
        gotoxy(i, 0);
        cout << ' ';
    }
    gotoxy(0, 26);
}
#include <iostream>

using namespace std;

int main()
{
    int si;
    cin >> si;
    for (int S = 0; S <= 10; S++){
        int m = 37;
        int i = 3;
        int c = 64;
        cout<< (m*si+i)%c << endl;
        si = (m*si+i)%c;
    }
    cout << "                    "<< endl;
    for (int S = 0; S <= 10; S++){
        int m = 25173;
        int i = 13849;
        int c = 65537;
        cout<< (m*si+i)%c << endl;
        si = (m*si+i)%c;
        
    }
}
#include <iostream>

using namespace std;

int main()
{
    double max1 = 0, index1 = 1, max2 = 0, index2 = 1;
	double p[2];
	int u[2];
	double a[3][4] = { {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
	double b[4][2] = { {1.2, 0.5}, {2.8, 0.4}, {5.0, 1.0}, {2.0, 1.5} };
	double c[3][2] = { {0, 0}, {0, 0}, {0, 0} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 4; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j] << endl;
		}
	}
	p[1] = c[0][0];
	p[2] = c[1][0];
	p[3] = c[2][0];
	for (int i = 0; i < 3; i++) {
		if (p[1] < p[i + 1]) {
			max1 = p[i + 1];
			++index1;
		}
	}
	cout << "Ответ на вопрос №1: Продавец № " << index1 << " выручил больше всего денег" << endl;
	u[1] = c[0][1];
	u[2] = c[1][1];
	u[3] = c[2][1];
	for (int i = 0; i < 3; i++) {
		if (u[1] < u[i + 1]) {
			max1 = u[i + 1];
			++index2;
		}
	}
	cout << "Ответ на вопрос №2: Продавец № " << index2 << " полчил наибольшие комиссионные" << endl;
	cout << "Ответ на вопрос №3: " << c[0][0] + c[1][0] + c[2][0] << endl;
	cout << "Ответ на вопрос №4: " << c[0][1] + c[1][1] + c[2][1] << endl;
	cout << "Ответ на вопрос №5: " << c[0][0] + c[1][0] + c[2][0] + c[0][1] + c[1][1] + c[2][1] << endl;
	cout << "" << endl;
}
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <clocale>
#include <fstream>
#include <algorithm>
#include <string>
#include <ostream>
#include <map>
#include <cstring>
#include <sstream>
using namespace std;
int charToInt(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }
    return -1;
}

char intToChar(int num) {
    if (num >= 0 && num <= 9) {
        return '0' + num;
    }
    if (num >= 10 && num <= 15) {
        return 'A' + num - 10;
    }
    return ' ';
}
string convertBase(const string& number, int fromBase, int toBase) {
    int decimal = 0;
    int power = 0;

    for (int i = number.length() - 1; i >= 0; --i) {
        int digit = charToInt(number[i]);
        if (digit < 0 || digit >= fromBase) {
            return "Ошибка";
        }
        decimal += digit * pow(fromBase, power);
        power = power + 1;
    }

    string result;
    while (decimal != 0) {
        result = intToChar(decimal % toBase) + result;
        decimal /= toBase;
    }

    if (result.empty()) {
        return "0";
    }
    return result;
}

int main() {
    cout << "Задача Системы счисления" << endl;
    string number;
    int fromBase, toBase;
    cout << "Введите число: "; cin >> number;
    cout << "Введите основание системы счисления, из которой нужно перевести: "; cin >> fromBase;
    cout << "Введите основание системы счисления, в которую нужно перевести: ";    cin >> toBase;
    string converted = convertBase(number, fromBase, toBase);
    cout << "Результат: " << converted << endl;
}

--------------------------------------------------------------
	5
--------------------------------------------------------------
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    bool f=true;
    cin >> a;
    cin >> b;
    while(f){
        if ((a!=0) && (b!=0)){
            if (abs(a) > abs(b)){
                a = a%b;
            }
            else{
                b =b%a;
            }
        }
        else{
            cout << (a+b);
            f = false;
        }
    }
    
}
#include <iostream>

using namespace std;

int main()
{
    cout << "Решето Эратосфена" << endl;
	int n, j, m = 2;
	cout << "Введите число, до которого требуется найти все простые числа = "; cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = i;
	}
	while (m < n) {
		if (a[m] != 0) {
			j = m * 2;
			cout << a[m] << " ";
			while (j < n) {
				a[j] = 0;
				j = j + m;
			}
			++m;
		}
		++m;
	}
	delete a;
	cout << " " << endl;
}
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "№21" << endl;
    int mas[]={0, 0, 0, 0, 0, 0};
    int cnt_a = 0, cnt_e = 0, cnt_i = 0, cnt_o = 0, cnt_u = 0, cnt_y = 0;
    char aword = 'a', aaword = 'A';
    char eword = 'e', eeword = 'E';
    char oword = 'o', ooword = 'O';
    char uword = 'u', uuword = 'U';
    char iword = 'i', iiword = 'I';
    char yword = 'y', yyword = 'y';
    char minword = ' ';
    ofstream fout("zadacha.txt");
    fout << "oaaaaaAAAoooOOOUUUUuuuuplqqjhpqnhdphwpdoqbwLLLLEEEEEEEEEeeeeeeeddeeeeee";
    fout.close();
    ifstream in("zadacha.txt");
    string line;
    getline(in, line);
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == aword || line[i] == aaword) {
            ++cnt_a;
        }
    }
    mas[0] = cnt_a;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == eword || line[i] == eeword) {
            ++cnt_e;
        }
    }
    mas[1] = cnt_e;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == oword || line[i] == ooword) {
            ++cnt_o;
        }
    }
    mas[2] = cnt_o;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == uword || line[i] == uuword) {
            ++cnt_u;
        }
    }
    mas[3] = cnt_u;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == iword || line[i] == iiword) {
            ++cnt_i;
        }
    }
    mas[4] = cnt_i;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == yword || line[i] == yyword) {
            ++cnt_y;
        }
    }
    mas[5] = cnt_y;
    int *max = std::max_element(std::begin(mas), std::end(mas));
    cout << "MAX количество гласных букв = " << *max << endl;
    if (*max == cnt_a) {
        cout << "Буква " << "a" << endl;
    }
    else if (*max == cnt_e) {
        cout << "Буква " << "e" << endl;
    }
    else if (*max == cnt_o) {
        cout << "Буква " << "o" << endl;
    }
    else if (*max == cnt_u) {
        cout << "Буква " << "u" << endl;
    }
    else if (*max == cnt_i) {
        cout << "Буква " << "i" << endl;
    }
    else if (*max == cnt_y) {
        cout << "Буква " << "y" << endl;
    }
    in.close();
    cout << " " << endl;
}
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;
int count_underscores(string s) {
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == ' ') count++;

  return count;
}
int main()
{
    cout << "№6" << endl;
    int nu = 0;
    
    ofstream fout("zadacha.txt");
    fout << "oaaaaa AAAoooOOOUUU Uuuuuplqqjhpqnhd phw pdoqbwLLLLEEEEEEEEEeeeeeeeddeeeeee";
    fout.close();
    ifstream in("zadacha.txt");
    string line;
    getline(in, line);
    size_t n = count_underscores(line)+1;
    int *dinamich_array = new int [n];
    int k = 0;
    for (int i = 0; i <= line.length(); i++) {
        if (line[i] != ' ' && i != line.length()){
            nu ++;
        }
        else{
            dinamich_array[k] = nu;
            k++;

            nu = 0;
        }

    }
    int ma = -6666;
    for (int l = 0; l < count_underscores(line)+1; l++) {
        if (ma < dinamich_array[l]){
            ma = dinamich_array[l];
        }
        
    }
    cout << ma;
    in.close();
    delete [] dinamich_array;
}
#include <iostream>
#include <cmath>
using namespace std;
int perevodv10(int n) {
    int num10 = 0, i = 0, cnt;
    while (n != 0) {
        cnt = n % 10;
        n /= 10;
        num10 += cnt * pow(2, i);
        ++i;
    }
    return num10;
}
int perevodv3(int num){
    int bin = 0, k = 1;
    while (num){
        bin += (num % 3) * k;
        k *= 10;
        num /= 3;
    }
    return bin;
}
int main()
{

    cout << "№4-21" << endl;
    int nu;
    cin >> nu;
    int ch;
    size_t n = nu;
    int *dinamich_array = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> ch;
        dinamich_array[i] = ch;
    }
    for (int i = 0; i < n; i++) {
        cout << perevodv3(perevodv10(dinamich_array[i]));
    }
    delete [] dinamich_array;

}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;
int findGCDmin(int a, int b) {
    int min = 66666;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        if (min > a){
            min = a;
        }
    }
    return min;
}
int findGCDmax(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{   cout << "№5-6" << endl;
    ofstream fout("zadacha.txt");
    for(int i; i < 11; i++){
        fout << i;
    }
    fout.close();
    ifstream in("zadacha.txt");
    string line;
    getline(in, line);
    for (int i = 1; i < line.length(); i++) {
        cout << findGCDmin(line[i+2], line[i+5]);
        break;
    }
}

-------------------
Шарики
--------------------
#define _USE_MATH_DEFINES
#include <iostream>
#include <clocale>
#include <cmath>
#include <string>
#include <ostream>
#include <fstream>
#include <algorithm>
#include <windows.h>
#include <map>
#include <sstream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

bool perestanovka(int* urna, int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (urna[i] == i)
        {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int cnt = 0, n;
    cout << "Введите количество шариков = "; cin >> n;
    int fac = fact(n);
    int* urna = new int[n];
    for (int k = 0; k < n; k++) {
        urna[k] = k;
    }
    for (int i = 0; i < fac; i++){
        next_permutation(urna, urna + n);
        if (perestanovka(urna, n))
            cnt++;
    }
    cout << cnt << endl;
    delete[] urna;
}
--------------------------
Спинеры
============================
#include <iostream>
using namespace std;

int main () {
	int a,b,c;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;	
	cout << "c: ";
	cin >> c;
	int n = (c - a) / b;
	cout << "n = " << n << endl;

}
#include <iostream>
using namespace std;

int main () {
	int m;
	cout << "m: ";
	cin >> m;
	int blades4 = m % 3;
	int blades3 = (m - 4 * blades4) / 3;
	if (blades3 >= 0) {
		cout << blades3 << endl;
		cout << blades4 << endl;
	}
	else {
		cout << "Error!";
	}

}
#include <iostream>
using namespace std;

int main () {
	int x, y, result;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	for (int i = 0; i < x; i++) {
		for (int j = i; j < x; j++) {
			for (int i = 0; i < y; i++) {
				for (int j = i; j < y; j++) {
					result++;
				}
			}
		}
	}
	cout << result << endl;

}
#include <iostream>
using namespace std;

int main () {
	int N, K;
	cout << "N: ";
	cin >> N;
	cout << "K: ";
	cin >> K;
	while (K != 1) {
		N = (N - K % 2) / 2;
		K = K / 2;
	}
	cout << (N - 1) / 2 << endl;
	cout << N / 2 << endl;

}
----------------------------------------
#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

#include <algorithm>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{   
    set<string> sortedItems;
    int k=0;
    string chislo;
    string familiy;
    setlocale(LC_ALL, "Russian");
    cout << "№6" << endl;
    ofstream fout("phone.txt");
    fout << "Романов 890354561 ";
    fout << "Гей 8741651561 ";
    fout.close();
    ifstream in("phone.txt");
    string line;
    getline(in, line);
    for (int i = 0; i <= line.length(); i++) {
        if (line[i] != ' ')
        {
            if(k == 0){
            familiy += line[i];
            }
            if(k == 1){
            chislo += line[i];
            }
        }
        else{
            if(k == 0){
                k+=1;
            }
            else{
                k-=1;
            }
        }
        sortedItems.insert(name);
    }
    in.close();

}
#include <iostream>
#include <clocale>
#include <fstream>
#include <string>
using namespace std;
int main() {
	cout << "Number of words";
	int Length;
	cin >> Length;
	string mas[Length];
	for(int k = 0; k < Length; k++){
	    string sl;
	    cin >> sl;
	    mas[k] =sl;
	}
	for (int i = 0; i < Length; i++)
	{
		for (int j = i + 1; j < Length; j++)
		{
			if (mas[i].length() > mas[j].length())
			{
				string temporary = mas[i];
				mas[i] = mas[j];
				mas[j] = temporary;
			}
		}
	}
	for(int k = 0; k < Length; k++){
	    cout << mas[k] << endl;
	}

}
