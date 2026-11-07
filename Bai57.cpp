#include <iostream>

using namespace std;

int main()
{
    int n, a, ket_qua = 1;
    cin >> n;
    while (n > 0){
        a = n % 10;
        if (a % 2 == 0){
            ket_qua = 0;
        }
        n = n / 10;
    }
    cout << ket_qua << endl;
    return 0;
}
