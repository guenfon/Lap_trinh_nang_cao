#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;
    for(int x = -n; x <= n; x++)
    {
        for(int y = -n; y <= n; y++)
        {
            temp = x;
            if (x >= 1)
                temp = x * - 1;
            if (y >= -(n + temp) && y <= n + temp)
                cout << "* ";
            else
                cout << ". ";
        }
        cout<<"\n";
    }
    return 0;
}