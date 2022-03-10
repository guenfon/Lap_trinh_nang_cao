#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 7;
    while (i <= n)
    {
        if (i % 7 == 0) cout << i << ' ';
        ++i;
    }
    return 0;
}