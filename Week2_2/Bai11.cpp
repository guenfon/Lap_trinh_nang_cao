#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int N_Max = 100;
    int n;
    cin >> n;
    double arrayX[N_Max];
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arrayX[i];
        sum += arrayX[i];
    }
    double mean = sum / n;
    double varX = 0;
    for (int i = 0; i < n; ++i)
        varX += (arrayX[i] - mean) * (arrayX[i] - mean);
    cout << fixed << setprecision(2) << varX * 1/n;
    return 0;
}