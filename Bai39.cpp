#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, i;
    float S;
    cin >> n;
    i = 2;
    S = sqrt(1.0);
    while ( i<= n){
        S = pow(S + sqrt(tgamma(i+1)), 1.0 / (i+1));
        //co su dung AI
        i = i + 1;
    }
    cout << S << endl;
    return 0;
}
