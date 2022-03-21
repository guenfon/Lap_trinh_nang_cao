#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const int N_MAX = 1002;
int arr[N_MAX][N_MAX];

void add_arr(int i, int H);
bool Falling_Rocks(int W, int H);
void Memset(int W, int H);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int W, H;
    cin >> H >> W;
    Memset(W, H);
    for (int i = 1; i <= W; ++i)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= H; ++j)
        {
            arr[i][j] = 0;
            if (s[j - 1] == 'R')
                arr[i][j] = -1;
            else if (s[j - 1] == 'Y')
                arr[i][j] = 1;
        }
    }
    bool check = Falling_Rocks(W, H);
    if (check)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

void add_arr(int i, int H)
{
    for (int j = 1; j <= H; ++j)
    {
        if (arr[i][j] == 1)
        {
            if (arr[i][j - 1] == 0)
                arr[i][j - 1] = 1;
            if (arr[i][j + 1] == 0)
            {
                arr[i][j + 1] = 1;
                ++j;
            }
        }
    }
}

bool Falling_Rocks(int W, int H)
{
    add_arr(1, H);
    for (int i = 2; i <= W; ++i)
    {
        for (int j = 1; j <= H; ++j)
        {
            if (arr[i][j] == 0 && arr[i - 1][j] == 1)
                arr[i][j] = 1;
        }
        add_arr(i, H);
    }
    for (int j = 1; j <= H; ++j)
        if (arr[W][j] == 1)
            return true;
    return false;
}

void Memset(int W, int H)
{
    for (int i = 0; i <= W + 1; ++i)
    {
        for (int j = 0; j <= H + 1; ++j)
        {
            arr[i][j] = -1;
        }
    }
}