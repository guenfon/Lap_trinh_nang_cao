#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin >> x;
    y = x;
    double sum = 1, oldsum = 0;
    double i = 1, j = 1;
    while (sum - oldsum > 0.001)
    {
        oldsum = sum;
        sum += y / j;
        i++;
        y *= x;
        j *= i;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}