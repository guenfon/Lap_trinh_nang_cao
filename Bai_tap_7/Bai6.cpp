#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin >> q;
    map<string, int> mp;
    while(q--)
    {
        int type, y;
        string x;
        cin >> type >> x;
        if (type == 1)
        {
            cin >> y;
            mp[x] += y;
        }
        else if(type == 2) mp[x] = 0;
        else cout << mp[x] << '\n';
    }  
    return 0;
}