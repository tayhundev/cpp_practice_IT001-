#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b;

    while (cin >> a >> b)
    {

    int Tong, Hieu, Tich;
    float Thuong;

    Tong = a+b;
    Hieu = a-b;
    Tich = a*b;
    Thuong = (float)a/b;

    cout << a << " + " << b << " = " << Tong << endl;
    cout << a << " - " << b << " = " << Hieu << endl;
    cout << a << " x " << b << " = " << Tich << endl;
    cout << fixed << setprecision(2) << a << " : " << b << " = " << Thuong << endl;
    }
    return 0;
}
