#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int N_Max = 100000;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    vector<int> arr[N_Max];
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        for (int x, j = 0; j < k; ++j)
            cin >> x, arr[i].push_back(x);
    }
    while (q--)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << '\n';
    }
    return 0;
}