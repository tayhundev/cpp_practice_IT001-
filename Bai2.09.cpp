
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, p, S;
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Khong phai tam giac" << endl;
    }
    else
    {
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c));

        if (a == b && b == c)
        {
            cout << "Tam giac deu, dien tich = ";
        }
        else if (a == b || a == c || b == c)
        {
            cout << "Tam giac can, dien tich = ";
        }
        else if (a * a + b * b == c * c ||
                 a * a + c * c == b * b ||
                 b * b + c * c == a * a)
        {
            cout << "Tam giac vuong, dien tich = ";
        }
        else
        {
            cout << "Tam giac thuong, dien tich = ";
        }

        cout << fixed << setprecision(2) << S << endl;
    }

    return 0;
}
