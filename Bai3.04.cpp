#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i;
    double S;
    S = 0, i = 0;
    cin >> n;
    while (i <= n)
    {
       if ( i % 2 == 0){
        S = S + 1.0 /(2 * i + 1);
       }
       else{
        S = S - 1.0 /(2 * i + 1);
       }
        i++;
    }
    cout << fixed << setprecision(5) << 4 * S << endl;

    return 0;
}
