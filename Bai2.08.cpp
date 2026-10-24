#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double toan, ly, hoa, DTB;
    cin >> toan >> ly >> hoa;
    DTB = (toan + ly + hoa)/3;
    if (DTB >= 9)
    {
        cout << fixed << setprecision(2) << "DTB = " << DTB << endl;
        cout << "Loai: XUAT SAC" << endl;
    }
    else if (DTB >= 8)
    {
        cout << fixed << setprecision(2) << "DTB = " << DTB << endl;
        cout << "Loai: GIOI" << endl;
    }
    else if (DTB >= 7)
    {
        cout << fixed << setprecision(2) << "DTB = " << DTB << endl;
        cout << "Loai: KHA" << endl;
    }
    else if (DTB >= 6)
    {
        cout << fixed << setprecision(2) << "DTB = " << DTB << endl;
        cout << "Loai: TB KHA" << endl;
    }
    else if (DTB >= 5)
    {
        cout << fixed << setprecision(2) << "DTB = " << DTB << endl;
        cout << "Loai: TB" << endl;
    }
    else if (DTB >= 4)
    {
        cout << fixed << setprecision(2) << "DTB = " << DTB << endl;
        cout << "Loai: YEU" << endl;
    }
    else{
        cout << fixed << setprecision(2) << "DTB = " << DTB << endl;
        cout << "Loai: KEM" << endl;
    }
    return 0;
}
