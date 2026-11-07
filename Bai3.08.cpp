#include <iostream>

using namespace std;

int main()
{
    int n, i;
    double S;
    cin >> n;
    S = 0;
    i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            S = S + i;
        }
        i++;
    }
    cout << S << endl;
    return 0;
}
