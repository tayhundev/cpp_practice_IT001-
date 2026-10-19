#include <iostream>

using namespace std;

int main()
{
    int age;
    char gender;

    cin >> age;
    cin >> gender;

    if ( gender == 'M' || gender == 'm' )
    {
        if (age >= 21)
            cout << 1;
        else
            cout << 3;
    }
    else if ( gender == 'F' || gender == 'f' )
    {
        if ( age >= 21)
            cout << 2;
        else
            cout << 4;
    }
    else {
        cout << "I do not know why" << endl;
    }
    return 0;
}
