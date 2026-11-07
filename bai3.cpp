#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    float S;
    cin >> n;
    S = 0;
    i = 1;
    while (i <= n)
    {
        S = S + 1.0/i;
        i = i + 1;
    }
    cout << fixed << setprecision(4) << S << endl;

    return 0;
}
