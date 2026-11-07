#include <iostream>

using namespace std;

int main()
{
    int n, i, dem;
    cin >> n;
    i = 1; dem = 0;
    while (i <= n)
    {
        if (n % i == 0)
        {
            dem++;
        }
        i++;
    }
     if (n==1)
     {
         cout << -1 << endl;
     }
     else if (dem==2)
     {
         cout << 1 << endl;
     }
     else
     {
         cout << 0 << endl;
     }
    return 0;
}
