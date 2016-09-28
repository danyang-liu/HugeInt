// HugeInt_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HugeIntDll.h"
#include <iostream>
#include <fstream>

using namespace HugeIntSpace;
int main()
{
	ofstream fout;
	fout.open("HugeInt_test.txt", ios::out);
	////测试数据输入
	HugeInt a("999999999999999999999"),b("8888765432101234"),c,d;
	fout << a << " + " << b << " = " << a + b << endl;
	fout << b << " - " << a << " = " << b - a << endl;
	fout << a << " * " << b << " = " << a * b << endl;
	fout << a << " / " << b << " = " << a / b << endl;
	fout << a << " % " << b << " = " << a % b << endl;
	c = a;
	fout << "++" << c << " = " << ++a << endl;
	c = a;
	fout << "--" << c << " = " << --a << endl;
	d = a;
	c = a += b;
	fout << d << " += " << b << " = " << c << endl;
	d = a;
	c = a -= b;
	fout << d << " -= " << b << " = " << c << endl;
	d = a;
	c = a *= b;
	fout << d << " *= " << b << " = " << c << endl;
	d = a;
	c = a /= b;
	fout << d << " /= " << b << " = " << c << endl;
	c = a > b;
	d = a;
	c = a %= b;
	fout << d << " %= " << b << " = " << c << endl;
	c = a > b;
	fout << a << " > " << b << " = " << c << endl;
	c = a < b;
	fout << a << " < " << b << " = " << c << endl;
	c = a >= b;
	fout << a << " >= " << b << " = " << c << endl;
	c = a <= b;
	fout << a << " <= " << b << " = " << c << endl;
	c = a == b;
	fout << a << " == " << b << " = " << c << endl;
	c = a != b;
	fout << a << " != " << b << " = " << c << endl;
	fout.close();
    return 0;
}

