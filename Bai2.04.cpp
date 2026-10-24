#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a;
    int n;

    std::cin >> a >> n;

    std::cout.precision(10);
    std::cout << std::round(a * n) / n;
    return 0;
}
