#include <iostream>
#include <string.h>

using namespace std;

int Count_Word(string s);

int main()
{
    string str;
    getline(cin, str);
    cout << Count_Word(str);
    return 0;
}

int Count_Word(string s)
{
    int count = 0;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == ' ' && s[i - 1] != ' ')
        {
            count++;
        }
    }
    if (s[s.length() - 1] != ' ')
    {
        count++;
    }
    return count;
}