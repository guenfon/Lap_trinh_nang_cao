#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Sort_Arr(vector<double> &arr, int n);

int main()
{
    int n;
    cin >> n;
    vector<double> arr;
    for (int i = 0; i < n; ++i)
    {
        double a;
        cin >> a;
        arr.push_back(a);
    }
    Sort_Arr(arr, n);
    for (double x: arr)
        cout << fixed << setprecision(2) << x << " ";
    return 0;
}

// sort array
void Sort_Arr(vector<double> &arr, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (arr[i] < arr[j])
            {
                double temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}