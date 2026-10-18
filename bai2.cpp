#include <iostream>

using namespace std;

int main()

{
    float NhietdoF;

    cin >> NhietdoF;

    float NhietdoC, NhietdoK;

    NhietdoC = (NhietdoF - 32) / 1.8;
    NhietdoK = NhietdoC + 273.15;

    cout << NhietdoC << " " << NhietdoK << endl;

    return 0;
}
