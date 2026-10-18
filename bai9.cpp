#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char c1, c2;
    int x;
    cin >> c1 >> c2 >> x;

    cout << "Ma ASCII cua ky tu `" << c1 << "', `" << c2 << "' lan luot la " << (int)c1 << " va " << (int)c2 << endl;
    cout << "Khoang cach giua hai ky tu `" << c1 << "'" << ", `" << c2 << "' la " << abs(c1-c2) << endl;
    cout << "Dang viet hoa cua ky tu `" << c1 << "' la '" << (char)(c1-32) << "'" << endl;
    cout << x << " la ma ASCII cua ky tu `" << (char)x << "'" << endl;

    return 0;
}
