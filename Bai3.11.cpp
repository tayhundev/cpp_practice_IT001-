#include <iostream>

using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;
    if (a > b)
    {
        i = b;
    }
    else
    {
        i = a;
    }
    while ( i >= 1)
    {
       if ( a % i == 0 && b % i == 0){
            cout << i << endl;
       break;
       }
       i--;
    }

    return 0;
}
