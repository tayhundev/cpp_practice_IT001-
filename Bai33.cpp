#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    float S;
    cin >> n;
    S = sqrt(2);
    i = 2;
    while (i <= n)
    {
        S = sqrt(2 + S);
        i = i + 1;
    }
    cout << fixed << setprecision(4) << S << endl;
    return 0;
}
