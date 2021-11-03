#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, min, max, min_i, max_i;
    float s = 0;
    cout << "  n=";
    cin >> n;
    int* a = new int[n];                      //выделение участка динамической памяти и присваивание её адреса указателю
    cout << "  Массив: ";
    for (i = 0; i < n; i++)                   //цикл для определения случайных чисел и выведения их на экран
    {
        a[i] = rand();                                                                                                                 
        cout << a[i] << " "; 
        s += (float)a[i] / n;                 //находим среднее значение массива
    }
    min = max = a[0];
    min_i = max_i = 0;
    for (i = 1; i < n; i++)                   //в этом цикле находим минимальное и максимальное значение массива
    {
        if (a[i] < min)
        {
            min = a[i];
            min_i = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            max_i = i; }
    }
    cout << "\n  min=" << min;                //вывод минимального значения
    cout << "\n  max=" << max;                //вывод максимального зн-ия
    i = a[max_i];                             //меняем максимум на минимум
    a[max_i] = a[min_i];
    a[min_i] = i;                              
    cout << "\n  min <--> max: ";
    for (i = 0; i < n; i++) 
        cout << a[i] << " ";
    cout << "\n  Среднее=" << s;
    cout << "\n  Новый массив: ";
    for (i = 0; i < n; i++)                   //убираем то значения, что больше среднего больше, чем на 10%, оставшиеся выводим
        if (s * 1.1 > a[i]) 
            cout << a[i] << " ";
    delete[]a;
    return 0;
}