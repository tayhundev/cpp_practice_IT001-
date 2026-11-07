#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, T, a;
    T = 1;
    cin >> n;
    while (n > 0){
       a = n % 10;
       T = T * a;
       n = n / 10;
    }
    cout << T;
    return 0;
}
