#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double eps, an, sum, k, n;
	eps = 0.001;
	sum = 0;
	n = 0;
	an = 1;
	while (an >= eps)
	{
		k = 2 * pow((n/ (n + 1)), n);
		an= an*k;
		sum = sum + an;
		n++;
	}
	cout << "Найти сумму ряда с точностью e=10-4, общий член которого an =  (2^n*n!)/n^n "<< endl;
 cout<< "Ответ(сумма): " << sum<<endl;
	return 0;
}

