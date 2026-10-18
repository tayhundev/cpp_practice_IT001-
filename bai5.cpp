#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   float a;
   cin >> a;
   float Chu_vi, Dien_tich;

   Chu_vi = (float)a*4;
   Dien_tich = (float)a*a;

   cout << fixed << setprecision(2) << "Chu vi: " << Chu_vi << endl;
   cout << fixed << setprecision(2) << "Dien tich: " << Dien_tich << endl;

   return 0;
}
