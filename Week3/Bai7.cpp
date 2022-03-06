#include <iostream>
#include <cstring>

using namespace std;

void Count_String(string s);

int main()
{
    string str;
    getline(cin, str);
    Count_String(str);
    return 0;
}

void Count_String(string s)
{
    int Count_Alpha = 0, Count_Digit = 0, Count_Other = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            Count_Alpha++;
        else if (s[i] >= '0' && s[i] <= '9')
            Count_Digit++;
        else
            Count_Other++;
    }
    cout << Count_Alpha << " " << Count_Digit << " " << Count_Other << endl;
}