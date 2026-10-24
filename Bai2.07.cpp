#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;

    if ( a == 0)
    {
        cout << "khong phai la phuong trinh bac 2" << endl;
    }
    else
    {
        delta = b*b - 4*a*c;

        if ( delta < 0)
        {
            cout << "PTVN" << endl;
        }
        else if ( delta == 0)
            {
                x1 = x2 = -b / (2*a);
                cout << "PT co nghiem kep: x1 = x2 = " << x1 << endl;
            }
            else
            {
                x1 = (-b + sqrt(delta)) / (2*a);
                x2 = (-b - sqrt(delta)) / (2*a);
                cout << "PT co hai nghiem phan biet:" << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
    }

    return 0;
}
