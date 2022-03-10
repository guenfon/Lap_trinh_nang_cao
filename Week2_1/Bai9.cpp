#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int N_Max = 1000;
    int n;
    cin >> n;
    double arr[N_Max];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    for (int i = n - 1; i >= 0; --i)
        cout << fixed << setprecision(2) << arr[i] << " ";
    return 0;
}