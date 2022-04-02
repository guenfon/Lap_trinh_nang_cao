#include <iostream>
#include <cstring>

using namespace std;

void rFilter(char *s) {
    // Your code goes here
    int len = strlen(s);
    for (int i = len-1; i >= 0; --i)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            break;
        else s[i] = '_';
    }
}

int  main()
{
    char *s = new char[50];
    cin >> s;
    rFilter(s);
    cout << s;
    return 0;
}