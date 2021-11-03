#include<iostream>
#include <math.h>
#include <mathc>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double an, sum, k;
	double i;
	int n;
	sum = 0;
	an = 1;
	for (n = 0; n < 32; n++);
	{
		k = 2 * pow((i / (i + 1)), i);
		an = an * k;
		sum = sum + an;
		i++;
	}
	cout << "Найти сумму ряда с точностью e=10-4, общий член которого an =  (2^n*n!)/n^n " << endl;
	cout << "Ответ(сумма): " << sum << endl;
	cout << k << endl;

	return 0;
}

