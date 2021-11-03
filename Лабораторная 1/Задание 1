#include<iostream>
#include <cmath> 
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, x, y, z, h, m, answer;
    std:cout.precision(15);
	a = 1000;
	b = 0.0001;
	x = pow((a + b), 2);              //(a+b)^2
	y = pow(a, 2);                    //(a^2)
	z = 2 * a * b;                    //(2ab)
	m = x - (y + z);                  //((a+b)^2-(a^2+2ab))  
	h = pow(b, 2);                    //(b^2)
	answer = m / h;
	cout << "x = (a+b)^2 = " << x << endl;
	cout << "y = (a^2) = " << y << endl;
	cout << "z = (2ab) = " << z << endl;
	cout << fixed << "m = ((a+b)^2-(a^2+2ab)) = " << m << endl;
	cout << fixed << "h = (b^2) = " << h << endl;
	cout << "Ответ:" << answer;

	return 0;
}
