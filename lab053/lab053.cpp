#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double k(const double x);

int main()
{
    double zp, zk, z, r;
    int n;

    cout << "zp = "; cin >> zp;
    cout << "zk = "; cin >> zk;
    cout << "n = ";  cin >> n;

    double dz = (zk - zp) / n;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "| " << setw(8) << "z" << " | " << setw(12) << "result" << " |" << endl;
    cout << "---------------------------" << endl;

    z = zp;
    while (z <= zk + dz / 2)
    {
        r = k(z * z + 1) - k(z * z - 1) + 2 * k(z);
        cout << "| " << setw(8) << setprecision(3) << z << " | "
            << setw(12) << setprecision(5) << r << " |" << endl;
        z += dz;
    }
    cout << "---------------------------" << endl;
    return 0;
}

double k(const double x)
{
    if (abs(x) >= 1)
        return (exp(x) + sin(x)) / (cos(x) * cos(x) + 1);
    else
    {
        double S = 0;
        int i = 0;
        double a = 1;
        S = a;
        do
        {
            i++;
            double R = x / i;
            a *= R;
            S += a;
        } while (i < 5);
        return S / exp(x);
    }
}