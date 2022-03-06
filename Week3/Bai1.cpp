#include <iostream>
#include <vector>

using namespace std;

bool check_Arr(vector<int> arr_A, vector<int> arr_B, int n);

int main()
{
    int n;
    cin >> n;
    vector<int> arr_A, arr_B;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        arr_A.push_back(a);
    }
    for (int i = 0; i < n; ++i)
    {
        int b;
        cin >> b;
        arr_B.push_back(b);
    }
    bool check = check_Arr(arr_A, arr_B, n);
    if (check == 0) cout << "NO";
    else cout << "YES";
    return 0;
}

bool check_Arr(vector<int> arr_A, vector<int> arr_B, int n)
{
    for (int i = 0; i < n; ++i)
        if (arr_A[i] != arr_B[i]) return 0;
    return 1;
}