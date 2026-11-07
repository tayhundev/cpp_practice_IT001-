#include <iostream>

using namespace std;

int main()
{
    int a, b, r, T, x, y;
    cin >> a >> b;
    x = a; y = b;
    while (y > 0){
        r = x % y;
        x = y; y = r;
    }
    T = (a * b)/x;
    cout << T << endl;
    return 0;
}
