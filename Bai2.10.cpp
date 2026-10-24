#include <iostream>

using namespace std;

int main()
{
    int day, month, year;
    int maxday;
    cin >> day >> month >> year;
    if ( year <= 0)
    {
        cout << "Nam khong hop le." << endl;
    }
    else if (month < 1 || month > 12)
    {
        cout << "Thang khong hop le." << endl;
    }
    else
    {
        if (month == 2)
        {
           if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
               maxday = 29;
           else
               maxday = 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            maxday = 30;
        }
        else
        {
            maxday = 31;
        }

    if (day < 1 || day > maxday)
    {
        cout << day << "/" << month << "/" << year << " la ngay khong hop le." << endl;
    }
    else
    {
        cout << day << "/" << month << "/" << year << " la ngay hop le." << endl;
    }
}
    return 0;
}
