#include <iostream>

using namespace std;

int main()
{
    int n, i, T;
    cin >> n;
    T = 1;
    i = 1;
    while (i<=n)
    {
        T = T * i;
        i = i + 1;
    }
    cout << T << endl;
    return 0;
}
