//任务1
/*
#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}
*/
//任务2
/*
#include<iostream>
using namespace std;
int main()
{
	double r, h,v;
	const double PI = 3.1415926f;
	cout << "输入半径r，再输入锥高h" << endl;
	cin >> r;
	cin >> h;
	v= h * PI * r * r /3;
	cout << v << endl;
}
*/
//任务3
/*
#include<iostream>
using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
}
*/
//任务4
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534; //0xffff
	cout << "output in unsigned int type: " << testUnint << endl;
	cout << "output in char type: " << static_cast<char>(testUnint) << endl;
	cout << "output in short type: " << static_cast<short>(testUnint) << endl;
	cout << "output in int type: " << static_cast<int>(testUnint) << endl;
	cout << "output in double type: " << static_cast<double>(testUnint) << endl;
	cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Oct unsigned int type: " << oct << testUnint << endl; //8进制输出
	system("pause");
	return 0;
}
*/
//任务5
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double C, F;
	cout << "华氏温度为：";
	cin >> F;
	C = (F - 32) / 1.8;
	cout << fixed << setprecision(2) << "摄氏温度为：" << C << endl;
	return 0;
}
*/
//任务1
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (a > 'Z') {
		a = a - 32;
		cout << a << endl;
	}
	else {
		a = a + 1;
		cout<< static_cast<int>(a) <<endl;
	}
}
*/
//任务2
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double x,y;
	cin >> x;
	if (x>0 && x<1) {
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if(x>=1 && x<5){
		y = 1 / (2 * x) + 1;
		cout<< y <<endl;
	}
	else if(x>=5 && x<10){
		y = x * x;
		cout << y << endl;
	}
}
*/
//任务3
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	cout << (a + b + c) << endl;
	if ((a == b or b == c or a == c) && (a+b>c) && (a+c>b) && (b+c>a)) {
		cout << "yes" << endl;
	}
	else { cout << "no" << endl; }
}
*/
//任务4
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b;
	string c;
	cin >> a;
	while (true) {
		cin >> c;
		if (c == "=") {
			break;
		}
		cin >> b;
		if (c == "+") { a = a + b; }
		else if (c == "-") { a = a - b; }
		else if (c == "*") { a = a * b; }
		else if (c == "/" and b != 0) { a = a / b; }
		else if (c == "/" and b == 0) { cout << "除数为零" << endl; }
		else if (c == "%") { a = a % b; }
		else { cout << "运算符非法" << endl; }
	}
	cout << a << endl;
}
*/
//任务5
/*
#include<iostream>
#include<cctype>
using namespace std;
int main() {
	char input;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "您输入的字符为：" << endl;
	while (cin.get(input) && input != '\n') {
		if (isalpha(input)) {
			a++;
		}
		else if (isspace(input)) {
			b++;
		}
		else if (isdigit(input)) {
			c++;
		}
		else {
			d++;
		}
	}
	cout << "英文字母的个数为：" << a << endl;
	cout << "空格的个数为：" << b << endl;
	cout << "数字字符的个数为：" << c << endl;
	cout << "其他字符的个数为：" << d << endl;
	return 0;
	*/
//任务6
/*
#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cout << "输入的两个数字分别为：";
		cin >> a;
		cin >> b;
	int num1, num2;
	num1 = a;
	num2 = b;
	if (a < b) {
		int num;
		num = b;
		b = a;
		a = num;
	}
	for (; ;) {
		if (a % b != 0) {
			c = a % b;
			a = b;
			b = c;
		}
		else {
			d = b;
			e = num1 * num2 / d;
			cout << "这两个数的最大公约数为：" << d << endl;
			cout << "这两个数的最小公倍数为：" << e << endl;
			break;
		}
	}
	return 0;
}
*/
//任务7
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a = 1;
	while (a < 6) {
		cout << string(a,'*') << endl;
		a += 1;
	}
}
#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
*/
//任务8
/*
#include<iostream>
	using namespace std;
	int main() {
		double a, b, c;
		cout << "输入的a为：";
		cin >> a;
		c = a;
	FLAG:
		b = (a + c / a) / 2;
		if (a - b > -1e-10 && a - b < 1e-10) {
			cout << "a的平方根为：" << b << endl;
		}
		else {
			a = b;
			goto FLAG;
		}
		return 0;
	}
	*/
//任务9
#include<iostream>
	using namespace std;
	int main() {
		double num1, num2, num3, num4, num5;
		num1 = 0.8;
		num2 = 2;
		num3 = 1;
		num4 = 0;
		num5 = 0;
		while (num5 <= 100) {
			num3 = num3 + num1 * num2;
			num5 = num5 + num2;
			num2 = 2 * num2;
			num4++;
		}
		double aver = num3 / num4;
		cout << "购买苹果平均每天花费：" << aver << endl;
		return 0;
	}



