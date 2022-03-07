#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int N_Max = 1000;
    int n;
    cin >> n;
    double vectorA[N_Max], vectorB[N_Max];
    for (int i = 0; i < n; ++i)
        cin >> vectorA[i];
    for (int i = 0; i < n; ++i)
        cin >> vectorB[i];
    double product = 0;
    for (int i = 0; i < n; ++i)
        product += vectorA[i] * vectorB[i];
    cout << fixed << setprecision(2) << product;
    return 0;
}