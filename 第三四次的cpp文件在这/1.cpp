﻿#include <iostream>
using namespace std;
int abc(int a, int b) {
	int c;
	if (a < b) { c = a; a = b; b = c; }
	c = a % b;
	while (c != 0) {
		a = c;
		c = b % c;
		b = a;
	}
	return b;
}
int main()

{
	int num1,num2;
	cin >> num1>>num2;
	cout << abc(num1, num2) << endl;
	cout << (num1 * num2 / abc(num1, num2)) << endl;
}

