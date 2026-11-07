#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,x,i;
    double S1, S2, S3;
    double gt = 1;
    cin >> n >> x;
    i = 0;
    S1 = 0; S2 = 0; S3 = 0;
    while (i <= n)
    {
            S1 = S1 + pow(x,i);
            S2 = S2 + pow(x,2*i);
            if (i>0)
            {
               gt = gt * i;
            }
            S3 = S3 + pow(x,i)/gt;
    i++;
    }
     cout << S1 << endl;
     cout << S2 << endl;
     cout << S3 << endl;
return 0;
}
