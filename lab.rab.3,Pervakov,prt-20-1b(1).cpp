#include <iostream>
#include <math.h>
using namespace std;
int main()
#define PI 3.14159265 
{
    float an, x, y, a = 0.10, b = 0.80, sn = 0, se = 0, e = 0.0001, k = 10.00;
    int n, m;
    for (x = a; x <= b; x += (b - a) / k)
    {
        sn = 0;
        se = 0;

        for (n = 1; n <= 35; n++)
        {
            sn += (pow(x, n) * cos(n * 60 * PI / 180) / n);
        };

        m = 1;
        an = 1;
        while (an > e)
        {
            an = (pow(x, m) * cos(m * 60 * PI / 180) / m);
            se += an;
            m++;
       } 

        y = -0.5 * log(1 - 2 * x * cos(60 * PI / 180) + pow(x, 2));

        printf("x=%.2f sn=%f se=%f y=%f\n", x, sn, se, y);
    }

    return 0;
}


