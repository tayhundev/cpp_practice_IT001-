#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "Co dang 2^k";
    } else {
        cout << "Khong co dang 2^k";
    }
    return 0;
}
