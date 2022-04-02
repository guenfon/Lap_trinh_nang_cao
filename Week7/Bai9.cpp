#include <iostream>
#include <cstring>

using namespace std;

void reverse(char *s) {
    // Your code goes here
    char *copy = new char[50];
    size_t len = strlen(s);
    for (size_t i = 0; i < len; ++i) copy[i] = s[i];
    for (int i = len-1; i >= 0; --i)
        s[len - i - 1] = copy[i];
}

int main()
{
    char *s = new char[50];
    cin >> s;
    reverse(s);
    cout << s;
    return 0;
}