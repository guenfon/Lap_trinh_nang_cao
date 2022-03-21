#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    int i = a[0], j = b[0], ans = 0;
    for (int k = 1; k < a.size(); ++k)
        i = max(i, a[k]);
    for (int k = 1; k < b.size(); ++k)
        j = min(j, b[k]);
    for (; i <= j; ++i)
    {
        bool flag = true;
        for (int k = 0; k < a.size(); ++k)
            if (i % a[k] != 0)
            {
                flag = false;
                break;
            }
        if (flag)
        {
            flag = true;
            for (int k = 0; k < b.size(); ++k)
                if (b[k] % i != 0)
                {
                    flag = false;
                    break;
                }
            if (flag)
                ++ans;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    int A[10], B[10];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    for (int i = 0; i < m; ++i)
        cin >> B[i];
    cout << getTotalX(vector<int>(A, A + n), vector<int>(B, B + m));
    return 0;
}