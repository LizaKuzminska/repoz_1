// Lab_02.cpp
// <Кузьмінська Єлизавета Анатоліївна>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 29
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double Pi = 4 * atan(1.); // число пі
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	z1 = 1. / 2 * (sin(Pi) + cos(Pi)) * x;
	z2 = -x / 2;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
