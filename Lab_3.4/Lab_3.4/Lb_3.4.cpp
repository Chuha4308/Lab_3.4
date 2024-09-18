// Lab_03_4.cpp
// < Aндрій Чухрай >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 19
#include <iostream> 
#include <cmath> 
using namespace std;
int main()
{
	double x;// вхідний аргумент 
	double y;// вхідний параметр 
	double R;// радіус 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі 
	if ((x >= 0 && x <= 2 * R && y >= 0 && y <= 2 * R && !(x * x + y * y <= R * R)) ||
		(x <= 0 && y <= 0 && y >= -x - 2 * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}