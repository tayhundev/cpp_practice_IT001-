#include <iostream>

using namespace std;

int main()
{
    int temperature;
    cout << "What is the outdoor temperature?" << endl;
    cin >> temperature;
    cout << endl;
    cout << "What is your plan today?" << endl;
    if ( temperature >= 33)
    {
        cout << "Good day for swimming" << endl;
    }
    else if ( temperature >= 24 && temperature < 33 )
    {
        cout << "Good day for golfing" << endl;
    }
    else if ( temperature >= 10 && temperature < 24)
    {
        cout << "Good day to play tennis" << endl;
    }
    else if (temperature < 10){
        cout << "Go to bed" << endl;
    }
    return 0;
}
