#include <iostream>

using namespace std;

int main()
{
    int M, i, n;
    float S;
    cin >> n;
    S = 0;
    i = 1;
    M = 0;
    while (i <= n)
    {
        M = M + i;
        S = S + 1/M;
        i = i +1;
    }
    cout << S << endl;
    return 0;
}
