#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    if ( a == 0 && b == 0 )
    {
        cout << "ℝ" << endl;
    }
    else if ( a == 0 && b != 0)
    {
        cout << "Ø" << endl;
    }
    else
    {
        cout << "{" << -b/a << "}" << endl;
    }
    return 0;
}
