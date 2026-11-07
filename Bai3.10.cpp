#include <iostream>

using namespace std;

int main()
{
    int x, a, b, c, i;
    cin >> x;

    if (x < 1 || x > 30)
    {
      cout << "So " << x << "khong nam trong khoang [1,30]." << endl;
    }
    else
    {
        a = 1;
        b = 1;
        i = 3;

        if (x == 1 || x == 2)
        {
            cout << 1 << endl;
        }
        else {
            while ( i <= x ){
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        cout << b << endl;
        }
    }


    return 0;
}
