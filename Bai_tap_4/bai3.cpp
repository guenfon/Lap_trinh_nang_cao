#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'palindromeIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int palindromeIndex(string s) {
    string s1 = "";
    for (int i = s.size()-1; i >= 0; --i)
        s1 += s[i];
    if (s1 == s)
        return -1;
    int i = 0, j = s.size()-1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            string s2 = s.substr(0, i) + s.substr(i + 1);
            string s3 = s1.substr(0, j) + s1.substr(j + 1);
            if (s2 == s3)
                return i;
            else
                return j;
        }
        ++i;
        --j;
    }
    return -1;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << palindromeIndex(s) << "\n";
    }
    return 0;
}