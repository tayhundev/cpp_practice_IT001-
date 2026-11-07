#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int i,n;
    double S1, S2, S3;
    double gt, tong;
    cin >> n;
    i = 1;
    S1 = 0, S2 = 0; S3 = 0;
    gt = 1; tong = 0;
    while ( i <= n)
    {
        S1 = S1 + pow(i,i);

        gt = gt * i;
        S2 = S2 + gt;

        tong = tong + i;
        S3 = S3 + 1.0/tong;
        i++;
    }
    cout << S1 << endl;
    cout << S2 << endl;
    cout << S3 << endl;
    return 0;
}
