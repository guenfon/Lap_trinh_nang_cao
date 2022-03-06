#include <iostream>
#include <iomanip>

using namespace std;
const int N_max = 1001;

void Input_Array(double *a, int n);
void Sort_Array(double *a, int n);
void Output_Array(double *a, int n);

int main()
{
    int n;
    cin >> n;
    double arr[N_max];
    Input_Array(arr, n);
    double x;
    cin >> x;
    arr[n] = x;
    Sort_Array(arr, n + 1);
    Output_Array(arr, n + 1);
    return 0;
}

void Input_Array(double *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Sort_Array(double *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                double temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Output_Array(double *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(2) << a[i] << " ";
    }
}