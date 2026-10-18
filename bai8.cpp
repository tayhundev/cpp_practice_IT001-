#include <iostream>

using namespace std;

int main()
{
    int a, b, so_chan_con_cho, so_chan_con_ga, so_con_cho, so_con_ga;
    cin >> a >> b;

    so_chan_con_cho = a*4;
    so_chan_con_ga = so_chan_con_cho - b;
    so_con_ga = so_chan_con_ga / 2;
    so_con_cho = a - so_con_ga;

    cout << so_con_ga << " " << so_con_cho << endl;



    return 0;
}
