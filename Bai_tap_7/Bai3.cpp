#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector <int> arr;
    arr.resize(n+1);
    arr[0] = 0;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    int x, a, b;
    cin >> x >> a >> b;
    arr.erase(arr.begin() + x);
    arr.erase(arr.begin() + a, arr.begin() + b);
    cout << arr.size() - 1 << '\n';
    for (int i = 1; i <= arr.size()-1; ++i) cout << arr[i] << ' ';   
    return 0;
}
