#include <iostream>

using namespace std;

int main()
{
    int n,a, Max;
    Max = 1;
    cin >> n;
    while (n > 0){
        a = n % 10;
        if (a > Max){
            Max = a;
        }
        n = n / 10;
    }
    cout << Max << endl;
    return 0;
}
