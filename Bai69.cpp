#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    float S, x;
    cin >> x >> n;
    S = 0;
    i = 0;
    while ( i <= n){
        S = pow(-1 , i) * pow(x, 2*i + 1) + S;
        i = i + 1;
    }
    cout << S << endl;
    return 0;
}
