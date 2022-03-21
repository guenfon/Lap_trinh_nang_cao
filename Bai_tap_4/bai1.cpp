#include <iostream>

using namespace std;

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p)
{
    int result_1 = 1, result_n = 1, page_now = 2;
    if (p == 1 || p == n) return 0;
    if (n % 2 != 0 && p == n - 1) return 0;
    while (p != page_now && p != page_now+1)
    {
        page_now += 2;
        ++result_1;
    }
    page_now = n-1;
    if (n % 2 != 0) --page_now;
    while (p != page_now && p != page_now-1)
    {
        page_now -= 2;
        ++result_n;
    }
    return min(result_1, result_n);
}

int main()
{
    int n, p;
    cin >> n >> p;
    //n : is the number of pages in the book
    //p : is the page number to turn to
    cout << pageCount(n, p);
    return 0;
}