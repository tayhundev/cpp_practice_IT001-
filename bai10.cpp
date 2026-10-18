#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,c;
    float p;
    float dien_tich;
    cin >> a >> b >> c;

    p=(a+b+c)/2.0;
    dien_tich = sqrt(p*(p-a)*(p-b)*(p-c));

    cout << fixed << setprecision(2) << dien_tich << endl;
    return 0;
}
