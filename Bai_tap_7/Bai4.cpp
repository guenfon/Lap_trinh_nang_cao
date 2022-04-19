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
    int arr[n+1];
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int l = 1, r = n;
        int index = 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                index = mid;
                break;
            }
            else if (arr[mid] < x)
                l = mid + 1;
            else
            {
                index = mid;
                r = mid - 1;
            }
        }
        if (x == arr[index])
        {
            while (arr[index] == arr[index-1]) --index;
            cout << "Yes " << index << '\n';
        }else
        {
            while (x > arr[index]) ++index;
            cout << "No " << index << '\n';
        }
    }   
    return 0;
}