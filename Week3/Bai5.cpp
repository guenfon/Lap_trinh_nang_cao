#include <iostream>
#include <vector>

using namespace std;

void Input_Array(vector<int> &a, int n);
bool Symmetric_Array(vector<int> a, int n);

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    Input_Array(arr, n);
    bool check = Symmetric_Array(arr, n);
    if (check == 1) cout << "Symmetric array.";
    else cout << "Asymmetric array.";
    return 0;
}

void Input_Array(vector<int> &a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
}

bool Symmetric_Array(vector<int> a, int n)
{
    for (int i = 0; i < n / 2; ++i)
    {
        if (a[i] != a[n - i - 1])
        {
            return false;
        }
    }
    return true;
}