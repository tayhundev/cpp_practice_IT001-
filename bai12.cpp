#include <iostream>

using namespace std;

int main()
{
    long long A;
    cin >> A;
    A = A * ((A > 0) - (A < 0));
    cout << A << endl;
    return 0;
}
