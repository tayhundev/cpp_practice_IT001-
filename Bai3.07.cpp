#include <iostream>

using namespace std;

int main()
{
    long long n, a, b, S;
    S = 0;
    cin >> a >> b >> n;
    for (i=1;i<=n;i++)
    {
        S = S + a * b;
        a++;
        b++;
    }
    cout << S;

    return 0;
}
