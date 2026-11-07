#include <iostream>

using namespace std;

int main()
{
    int n, tam, dao = 0;
    cin >> n;
    tam = n;
    while (n>0)
    {
        int Chuso = n % 10;
        dao = dao * 10 + Chuso;
        n = n / 10;
        //n=n/10 loai bo chu so cuoi de tiep tuc vong lap chuso=n%10
    }
    if (dao == tam)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
