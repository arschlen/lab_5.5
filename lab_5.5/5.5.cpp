#include <iostream>
#include <cmath>
using namespace std;

double GeometricTerm(int a1, int q, int n)
{
    if (n == 1)
        return a1;
    else
        return q * GeometricTerm(a1, q, n - 1);
}

double GeometricSum(int a1, int q, int n)
{
    if (n == 1)
        return a1;
    else
        return a1 * pow(q, n - 1) + GeometricSum(a1, q, n - 1);
}

int main()
{
    int a1, q, n;

    cout << "a1: "; cin >> a1;
    cout << "q: "; cin >> q;
    cout << "n: "; cin >> n;

    double nthTerm = GeometricTerm(a1, q, n);
    double sum = GeometricSum(a1, q, n);

    cout << "n: " << nthTerm << endl;
    cout << "sum-n: " << sum << endl;

    return 0;
}
