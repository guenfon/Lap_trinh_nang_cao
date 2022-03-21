#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int N_Max = 100;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int check[N_Max+1];
    int arr_A[N_Max], arr_B[N_Max+1];
    for (int i = 0; i <= N_Max; ++i)
        check[i] = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr_A[i];
        ++check[arr_A[i]];
    }
    for (int i = 0; i <= n; ++i)
    {
        cin >> arr_B[i];
        if (check[arr_B[i]] == 0)
        {
            cout << arr_B[i];
            break;
        }
        else --check[arr_B[i]];
    }
    return 0;
}