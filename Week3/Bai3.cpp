#include <iostream>

using namespace std;
const int N_Max = 1000;

void Arr_same(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[N_Max];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    Arr_same(arr, n);
    return 0;
}

void Arr_same(int arr[], int n)
{
    int update_Arr = arr[0];
    cout << arr[0] << ' ';
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] != update_Arr)
        {
            cout << arr[i] << ' ';
            update_Arr = arr[i];
        }
    }
}