#include <iostream>

using namespace std;

int main()
{
    float psi;

    cin >> psi;

    float heso, kg_cm2;

    heso = 0.453592/(2.54*2.54);
    kg_cm2 = heso * psi;

    cout 0<< kg_cm2 << endl;

    return 0;
}
