#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=2, dem=0;
    //n la so nguoi dung nhap vao
    //i = 2 la xet tu so nguyen nho nhat
    //dem = 0 ban dau chua tim duoc cap nao
    while (i + 2 < n)
    {
        int nt1 = 1;
        int nt2 = 1;
        int j = 2;
        //nt1 = 1 neu la so nguyen to nt1=0 neu khong la so nguyen to
        //cho j=2 xem thu no co chia het cho 2 va be hon 2 hay khong der xets la so nguyen to hay chua

    while (j < i)
    {
        if (i % j == 0)
        {
            nt1 = 0;
            break;
        }
        j++;
    }
    j = 2;
    while (j < i + 2)
    {
        if ((i + 2) % j == 0)
        {
            nt2 = 0;
            break;
        }
        j++;
    }
    if (nt1==1 && nt2==1)
    {
        cout << i << ", " << i + 2 << endl;
        dem++;
    }
    i++;
    }
    cout << "Tong: " << dem << " cap so sinh doi < " << n << endl;

    return 0;
}
