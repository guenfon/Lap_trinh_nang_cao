#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    //kiem tra a, b, c co phai la ba cach cua tam giac khong
    if ((abs(b - c) < a && a < b + c) || (abs(a - c) < b && b < a + c) || (abs(a - b) < c && c < a + b))
    {
        //tich dien tich cua tam giac co ba cach a, b, c
        double p;
        p = (a + b + c) / 2.0;
        double S;
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2) << S;
    }
    else cout << "invalid";
    return 0;
}