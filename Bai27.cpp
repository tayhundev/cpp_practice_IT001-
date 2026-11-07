#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,i;
    float S;
    cin >> n;
    S = 0;
    i = 1;
    while (i<=n)
    {
        if (n % i ==0){
          if (i % 2 == 0){
            S = S + 1;
          }
        }
        i = i + 1;
    }
    cout << S;
    return 0;
}
