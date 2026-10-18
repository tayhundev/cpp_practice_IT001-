#include <iostream>

using namespace std;

int main()
{
    float a,b;
    cin >> a >> b;
    float max, min;

    max = ((a+b)+abs(a-b))/2;
    min = ((a+b)-abs(a-b))/2;

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;


    return 0;
}
